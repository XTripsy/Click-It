#ifndef CAMERA_H
#define CAMERA_H

#include "object.h"

struct Camera2D;

class camera : public object
{
public:
	camera() = default;
	~camera() = default;

public:
	virtual void Init() override;
	virtual void Update() override;
	virtual void SetPosition(Vector2 pos) override;
	virtual Vector2 GetPosition() override;
	virtual void SetIsDestroy(bool value) override;
	virtual bool GetIsDestroy() override;
	Camera2D GetCamera();

private:
	Camera2D main_camera;
	Vector2 position;
	bool isDestroy;
};

#endif