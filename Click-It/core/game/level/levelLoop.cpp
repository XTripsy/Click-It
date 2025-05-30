#include <iostream>
#include <random>

#include "gameManager.h"
#include "scoreManager.h"
#include "timeManager.h"

#include "factorybox.h"

#include "baseBox.h"

#include "decoratorSafeBox.h"
#include "decoratorBombBox.h"

#include "decoratorBoxSmall.h"
#include "decoratorBoxMedium.h"
#include "decoratorBoxLarge.h"

#include "levelLoop.h"

void levelLoop::Init()
{
	CreateBoxs();
}

void levelLoop::Click()
{
	Vector2 mousePos = GetMousePosition();

	for (auto& var : boxs)
	{
		var->clicked();
	}

	if (scoreManager::GetInstance().GetScore() == goalScore)
	{
		gameManager::GetInstance().ResetLevel();
		timeManager::GetInstance().AddTime();
	}
}

void levelLoop::CreateBoxs()
{
	CreateSafeBox();
	CreateBombBox();
}

void levelLoop::CreateSafeBox()
{
	std::unique_ptr<factory<box>> factory_box_uptr = std::make_unique<factoryBox>();
	std::unique_ptr<box> safe_uptr;

	for (int i = 0; i < RandomNumer(3, 5); i++)
	{
		safe_uptr = factory_box_uptr->create(Vector2(GetRandomPosition().first, GetRandomPosition().second));
		safe_uptr = CreateSizeBox(std::move(safe_uptr));
		safe_uptr = std::make_unique<decoratorSafeBox>(std::move(safe_uptr));
		boxs.push_back(std::move(safe_uptr));
		totalSafeBox++;
	}

	goalScore = startScore + totalSafeBox;
}

void levelLoop::CreateBombBox()
{
	std::unique_ptr<factory<box>> factory_box_uptr = std::make_unique<factoryBox>();
	std::unique_ptr<box> bomb_uptr;

	for (int i = 0; i < RandomNumer(1, 5); i++)
	{
		bomb_uptr = factory_box_uptr->create(Vector2(GetRandomPosition().first, GetRandomPosition().second));
		bomb_uptr = CreateSizeBox(std::move(bomb_uptr));
		bomb_uptr = std::make_unique<decoratorBombBox>(std::move(bomb_uptr));
		boxs.push_back(std::move(bomb_uptr));
	}
}

void levelLoop::ResetLevel()
{
	totalSafeBox = 0;
	goalScore = 0;

	for (int i = 0; i < GRID_WIDTH; i++)
	{
		for (int j = 0; j < GRID_HEIGHT; j++)
		{
			grid[i][j] = false;
		}
	}

	startScore = scoreManager::GetInstance().GetScore();
}

std::unique_ptr<decorator<box>> levelLoop::CreateSizeBox(std::unique_ptr<box> box)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dist(1, 3);

	switch (dist(gen))
	{
	case 1:
		return std::make_unique<decoratorBoxSmall>(std::move(box));
		break;
	case 2:
		return std::make_unique<decoratorBoxMedium>(std::move(box));
		break;
	case 3:
		return std::make_unique<decoratorBoxLarge>(std::move(box));
		break;
	}
}

int levelLoop::RandomNumer(int start, int end)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dist(start, end);

	return dist(gen);
}

std::pair<int, int> levelLoop::GetRandomPosition()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> distX(1, GRID_WIDTH - 1);
	std::uniform_int_distribution<int> distY(1, GRID_HEIGHT - 1);

	int x, y;

	do 
	{
		x = distX(gen);
		y = distY(gen);
	} 
	while (grid[x][y]);

	grid[x][y] = true;
	return { x * GRID_SIZE, y * GRID_SIZE };
}
