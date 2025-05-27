#include <iostream>
#include "raylib.h"

#include "inputManager.h"

void inputManager::Init()
{

}

void inputManager::Update()
{
    mPreviousKeys = mCurrentKeys;

    for (int key = 0; key < 512; ++key)
    {
        mCurrentKeys[key] = IsKeyPressed(key) || IsMouseButtonPressed(key);

        if (mKeyBindings.count(key))
        {
            const auto& binding = mKeyBindings[key];

            if (bIsKeyDown(key)) InvokeBinding(binding, InputEventType::Press);
            if (bIsKeyHold(key)) InvokeBinding(binding, InputEventType::Hold);
            if (bIsKeyReleased(key)) InvokeBinding(binding, InputEventType::Release);
        }
    }
}

void inputManager::Shutdown()
{

}

void inputManager::BindKeyFunction(std::function<void()> function, int key, InputEventType type)
{
	mKeyBindings[key].functionCommand_f[(int)type] = function;
}

void inputManager::InvokeBinding(const auto& bind, InputEventType type)
{
    if (bind.functionCommand_f[int(type)]) bind.functionCommand_f[int(type)]();
}

bool inputManager::bIsKeyDown(int key)
{
    return !mPreviousKeys[key] && mCurrentKeys[key];
}

bool inputManager::bIsKeyHold(int key)
{
    return mPreviousKeys[key] && mCurrentKeys[key];
}

bool inputManager::bIsKeyReleased(int key)
{
    return mPreviousKeys[key] && !mCurrentKeys[key];
}
