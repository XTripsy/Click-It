#include "decoratorBoxMedium.h"

float decoratorBoxMedium::GetSizeBox() const
{
	return base.get()->size_box + 20;
}
