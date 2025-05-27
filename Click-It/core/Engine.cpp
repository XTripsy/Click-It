#include "raylib.h"
#include "gameManager.h"
#include "inputManager.h"

#include "Engine.h"

void Engine::Init()
{
	gameManager& game_manager = gameManager::GetInstance();
	inputManager& input_manager = inputManager::GetInstance();
	game_manager.SetSizeWindow(Vector2(600, 600));

	InitWindow(game_manager.GetSizeWindow().x,game_manager.GetSizeWindow().y, "click-it");

	SetTargetFPS(60);

	game_manager.Init();
	input_manager.BindKeyFunction([&] {game_manager.CheckCollisionObject();}, MOUSE_BUTTON_LEFT, InputEventType::Press);
}

void Engine::Update()
{
	gameManager& game_manager = gameManager::GetInstance();
	inputManager& input_manager = inputManager::GetInstance();

	while (!WindowShouldClose())
	{
	#pragma region BeginRender
		BeginDrawing();
		BeginMode2D(game_manager.GetCamera());
		ClearBackground(BLACK);
	#pragma endregion

		input_manager.Update();
		game_manager.Update();

	#pragma region EndRender
		EndMode2D();
		EndDrawing();
	#pragma endregion
	}
}

void Engine::Shutdown()
{
	gameManager::GetInstance().Shutdown();
	CloseWindow();
}
