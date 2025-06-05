#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include "singleton.h"
#include <memory>
#include <vector>
#include "camera.h"
#include "level.h"

struct Camera2D;
struct Vector2;

class gameManager : public singleton<gameManager>
{
public:
	gameManager() = default;
	~gameManager() = default;

public:
	virtual void Init() override;
	virtual void Update() override;
	virtual void Shutdown() override;

public:
	void SetSizeWindow(Vector2 size);
	Vector2 GetSizeWindow();

	void ResetLevel();

	Camera2D GetCamera();

	void CheckCollisionObject();

	void SetConditionWindow(bool value);
	bool GetConditionWindow();

private:
	bool bIsWindowClose;
	Vector2 sizeWindow;

	std::unique_ptr<camera> main_camera;
	std::unique_ptr<level> level_loop;
	std::vector<std::unique_ptr<level>> levels;
};

#endif