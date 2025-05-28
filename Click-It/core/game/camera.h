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
	Camera2D GetCamera();

private:
	Camera2D main_camera;
};

#endif