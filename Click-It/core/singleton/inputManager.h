#ifndef INPUTMANAGER_H
#define INPUTMANAGER_H

#include "singleton.h"
#include <functional>

enum class InputEventType
{
	Press,
	Hold,
	Release
};

struct CommandBinding
{
	std::function<void()> functionCommand_f[3] = { nullptr };
};

class inputManager : public singleton<inputManager>
{
public:
	inputManager() = default;
	~inputManager() = default;

public:
	virtual void Init() override;
	virtual void Update() override;
	virtual void Shutdown() override;
	void BindKeyFunction(std::function<void()> function, int key, InputEventType type);

private:
	void InvokeBinding(const auto& bind, InputEventType type);
	bool bIsKeyDown(int key);
	bool bIsKeyHold(int key);
	bool bIsKeyReleased(int key);

private:
	std::unordered_map<int, bool> mCurrentKeys;
	std::unordered_map<int, bool> mPreviousKeys;

	std::unordered_map<int, CommandBinding> mKeyBindings;
};

#endif