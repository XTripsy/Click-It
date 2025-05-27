#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include "singleton.h"
#include <memory>
#include <vector>
#include "camera.h"
#include "bomb.h"

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

	Camera2D GetCamera();

	void CheckCollisionObject();

private:
	Vector2 sizeWindow;

	std::unique_ptr<camera> main_camera;
	std::vector<std::unique_ptr<box>> boxs;
};

#endif