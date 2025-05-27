#include "box.h"

Vector2 box::GetCenterPosition()
{
	return Vector2(GetPosition().x - (size_box.x / 2), GetPosition().y - (size_box.y / 2));
}
