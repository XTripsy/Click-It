#include <iostream>
#include "box.h"

void box::Init()
{

}

void box::Update()
{

}

void box::SetPosition(Vector2 pos)
{
	position = pos;
}

Vector2 box::GetPosition()
{
	return position;
}

void box::SetIsDestroy(bool value)
{
	isDestroy = value;
}

bool box::GetIsDestroy()
{
	return isDestroy;
}
