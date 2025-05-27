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

Camera2D camera::GetCamera()
{
	return main_camera;
}
