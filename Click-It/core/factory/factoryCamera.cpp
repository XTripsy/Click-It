#include "factoryCamera.h"

std::unique_ptr<camera> factoryCamera::create(Vector2 pos)
{
	auto camera_uptr = std::make_unique<camera>();
	camera_uptr->SetPosition(pos);
	camera_uptr->Init();
	return camera_uptr;
}
