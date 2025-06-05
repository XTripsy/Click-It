#include "raylib.h"
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

#include "levelTwo.h"

void levelTwo::Init()
{
	std::unique_ptr<factory<box>> factory_box_uptr = std::make_unique<factoryBox>();

	std::unique_ptr<box> bomb_uptr = factory_box_uptr->create(Vector2(500, 200));
	bomb_uptr = std::make_unique<decoratorBoxSmall>(std::move(bomb_uptr));
	bomb_uptr = std::make_unique<decoratorBombBox>(std::move(bomb_uptr));
	boxs.push_back(std::move(bomb_uptr));

	bomb_uptr = factory_box_uptr->create(Vector2(200, 400));
	bomb_uptr = std::make_unique<decoratorBoxLarge>(std::move(bomb_uptr));
	bomb_uptr = std::make_unique<decoratorBombBox>(std::move(bomb_uptr));
	boxs.push_back(std::move(bomb_uptr));

	std::unique_ptr<box> safe_uptr = factory_box_uptr->create(Vector2(300, 600));
	safe_uptr = std::make_unique<decoratorBoxLarge>(std::move(safe_uptr));
	safe_uptr = std::make_unique<decoratorSafeBox>(std::move(safe_uptr));
	boxs.push_back(std::move(safe_uptr));

	safe_uptr = factory_box_uptr->create(Vector2(400, 200));
	safe_uptr = std::make_unique<decoratorBoxMedium>(std::move(safe_uptr));
	safe_uptr = std::make_unique<decoratorSafeBox>(std::move(safe_uptr));
	boxs.push_back(std::move(safe_uptr));

	safe_uptr = factory_box_uptr->create(Vector2(400, 100));
	safe_uptr = std::make_unique<decoratorBoxMedium>(std::move(safe_uptr));
	safe_uptr = std::make_unique<decoratorSafeBox>(std::move(safe_uptr));
	boxs.push_back(std::move(safe_uptr));

	safe_uptr = factory_box_uptr->create(Vector2(200, 500));
	safe_uptr = std::make_unique<decoratorBoxMedium>(std::move(safe_uptr));
	safe_uptr = std::make_unique<decoratorSafeBox>(std::move(safe_uptr));
	boxs.push_back(std::move(safe_uptr));

	for (auto& var : boxs)
	{
		var->Init();
	}
}

void levelTwo::Click()
{
	Vector2 mousePos = GetMousePosition();

	for (auto& var : boxs)
	{
		var->clicked();
	}

	if (scoreManager::GetInstance().GetScore() == 5)
	{
		timeManager::GetInstance().AddTime();
	}
}
