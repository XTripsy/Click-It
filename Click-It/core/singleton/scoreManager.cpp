#include <iostream>
#include "raylib.h"

#include "scoreManager.h"

void scoreManager::Init()
{

}

void scoreManager::Update()
{
	DrawText(std::to_string((int)score).c_str(), 300, 0, 20, RAYWHITE);
}

void scoreManager::Shutdown()
{

}

void scoreManager::onNotify(const std::string& notif)
{
	if (notif == "bomb") bombNotif();
}

void scoreManager::bombNotif()
{
	std::cout << "bomb" << std::endl;
	score -= 1;
}
