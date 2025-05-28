#include "decoratorBoxSmall.h"

float decoratorBoxSmall::GetSizeBox() const
{
	return base.get()->size_box + 10;
}
