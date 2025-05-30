#include <iostream>
#include "raylib.h"

#include "healthManager.h"

void healthManager::Init()
{
	health = 3;
}

void healthManager::Update()
{
	DrawText(std::to_string((int)health).c_str(), 0, 0, 20, RED);

	if (health == 0)
		CloseWindow();
}

void healthManager::Shutdown()
{

}

void healthManager::onNotify(const std::string& notif)
{
	if (notif == "bombBox") health -= 1;
}
