#include <iostream>
#include "raylib.h"

int main()
{
	InitWindow(500, 600, "click-it");

	while (!WindowShouldClose())
	{
		BeginDrawing();
		DrawFPS(10, 10);
		std::cout << "ajg 1 line doang" << std::endl;
		EndDrawing();
	}

	CloseWindow();
}
