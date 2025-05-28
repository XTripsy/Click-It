#include "box.h"

box::box()
{
	size_box = 10;
}

Vector2 box::GetCenterPosition()
{
	float size = size_box / 2;
	return Vector2(GetPosition().x - size, GetPosition().y - size);
}
