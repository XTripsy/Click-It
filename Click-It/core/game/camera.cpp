#include "raylib.h"

#include "camera.h"

void camera::Init()
{
	Camera2D cam = { 0 };
	cam.target = GetPosition();
	cam.offset = GetPosition();
	cam.rotation = 0;
	cam.zoom = 1;

	main_camera = cam;
}

void camera::Update()
{

}

void camera::SetPosition(Vector2 pos)
{
	position = pos;
}

Vector2 camera::GetPosition()
{
	return position;
}

void camera::SetIsDestroy(bool value)
{
	isDestroy = value;
}

bool camera::GetIsDestroy()
{
	return isDestroy;
}

Camera2D camera::GetCamera()
{
	return main_camera;
}
