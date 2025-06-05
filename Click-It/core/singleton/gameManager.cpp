#include <iostream>
#include "factoryCamera.h"
#include "raylib.h"

#include "observerManager.h"
#include "scoreManager.h"
#include "soundManager.h"
#include "healthManager.h"

#include "levelLoop.h"

#include "levelOne.h"
#include "levelTwo.h"
#include "levelThree.h"

#include "gameManager.h"

void gameManager::Init()
{
	observer& score = scoreManager::GetInstance();
	observer& sound = soundManager::GetInstance();
	observer& health = healthManager::GetInstance();
	observerManager::GetInstance().addObserver(&score);
	observerManager::GetInstance().addObserver(&sound);
	observerManager::GetInstance().addObserver(&health);

	std::unique_ptr<factory<camera>> factory_camera_uptr = std::make_unique<factoryCamera>();
	auto camera_uptr = factory_camera_uptr->create(Vector2(0, 0));
	camera_uptr->Init();
	main_camera = std::move(camera_uptr);

	level_loop = std::make_unique<levelLoop>();
	level_loop->Init();
}

void gameManager::Update()
{
	level_loop->Update();
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

void gameManager::ResetLevel()
{
	level_loop->Init();
}

Camera2D gameManager::GetCamera()
{
	return main_camera->GetCamera();
}

void gameManager::CheckCollisionObject()
{
	level_loop->Click();
}

void gameManager::SetConditionWindow(bool value)
{
	bIsWindowClose = value;
}

bool gameManager::GetConditionWindow()
{
	return bIsWindowClose;
}
