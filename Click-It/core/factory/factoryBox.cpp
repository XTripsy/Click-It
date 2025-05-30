#include "baseBox.h"

#include "factoryBox.h"

std::unique_ptr<box> factoryBox::create(Vector2 pos)
{
	auto basebox_uptr = std::make_unique<baseBox>();
	basebox_uptr->SetPosition(pos);
	return basebox_uptr;
}
