#include <iostream>
#include <string>
#include "observerManager.h"

#include "bomb.h"

bomb::bomb()
{
	//size_box = 40;
	bomb_box = { 0, 0, size_box, size_box };
	color_box = RED;
}

void bomb::Init()
{
	bomb_box.x = GetCenterPosition().x;
	bomb_box.y = GetCenterPosition().y;
	DrawRectangleRec(bomb_box, color_box);
}

void bomb::Update()
{
	DrawRectangleRec(bomb_box, color_box);
	//DrawText(std::to_string((int)size_box.x/10).c_str(), GetPosition().x - 3.5f, GetPosition().y - 10, size_box.y/2, RAYWHITE);
}

void bomb::clicked()
{
	if (!CheckCollisionPointRec(GetMousePosition(), bomb_box)) return;

	observerManager::GetInstance().notifyObserver("bomb");

	size_box -= 10;
	bomb_box = { GetCenterPosition().x, GetCenterPosition().y, size_box, size_box };

	//color_box = RAYWHITE;
}

float bomb::GetSizeBox() const
{
	return size_box;
}
