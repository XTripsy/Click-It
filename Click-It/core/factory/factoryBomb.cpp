#include "bomb.h"

#include "factoryBomb.h"

std::unique_ptr<box> factoryBomb::create(Vector2 pos)
{
	auto bomb_uptr = std::make_unique<bomb>();
	bomb_uptr->SetPosition(pos);
	return bomb_uptr;
}
