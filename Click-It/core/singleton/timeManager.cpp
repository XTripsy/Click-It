#include "raylib.h"
#include <string>
#include "gameManager.h"

#include "timeManager.h"

void timeManager::Init()
{
    time = 3;
}

void timeManager::Update()
{
    currentTime += GetFrameTime();

    if (currentTime >= 1.0f) {
        currentTime = 0.0f;
        time--;
    }

	DrawText(TextFormat(std::to_string((int)time).c_str()), 580, 0, 20, BLUE);

    if (time < 0)
        gameManager::GetInstance().SetConditionWindow(true);
}

void timeManager::Shutdown()
{

}

void timeManager::AddTime()
{
    time += 3;
}
