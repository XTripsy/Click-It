#include <iostream>
#include "factoryBomb.h"
#include "factoryCamera.h"
#include "raylib.h"

#include "gameManager.h"

void gameManager::Init()
{
	std::unique_ptr<factory<camera>> factory_camera_uptr = std::make_unique<factoryCamera>();
	auto camera_uptr = factory_camera_uptr->create(Vector2(0, 0));
	camera_uptr->Init();
	main_camera = std::move(camera_uptr);

	std::unique_ptr<factory<box>> factory_box_uptr = std::make_unique<factoryBomb>();
	auto bomb_uptr = factory_box_uptr->create(Vector2(300, 300));
	bomb_uptr->Init();

	boxs.push_back(std::move(bomb_uptr));
}

void gameManager::Update()
{
#pragma region RenderBox
	for (auto& var : boxs)
	{
		var->Update();
	}
#pragma endregion
}

void gameManager::Shutdown()
{

}

void gameManager::SetSizeWindow(Vector2 size)
{
	sizeWindow = size;
}

Vector2 gameManager::GetSizeWindow()
{
	return sizeWindow;
}

Camera2D gameManager::GetCamera()
{
	return main_camera->GetCamera();
}

void gameManager::CheckCollisionObject()
{
	Vector2 mousePos = GetMousePosition();

	for (auto& var : boxs)
	{
		var->clicked();
	}
}
