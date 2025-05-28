#include <iostream>

#include "soundManager.h"

void soundManager::Init()
{

}

void soundManager::Update()
{

}

void soundManager::Shutdown()
{

}

void soundManager::onNotify(const std::string& notif)
{
	if (notif == "bomb") sfxBomb();
}

void soundManager::sfxBomb()
{
	std::cout << "sfx bomb" << std::endl;
}
