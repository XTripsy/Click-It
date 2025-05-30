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
	if (notif == "safeBox") score += 1;
}

float scoreManager::GetScore()
{
	return score;
}
