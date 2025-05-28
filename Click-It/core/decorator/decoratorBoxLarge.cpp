#include "decoratorBoxLarge.h"

void decoratorBoxLarge::Init()
{
}

void decoratorBoxLarge::Update()
{
	base.get()->Update();
}

void decoratorBoxLarge::clicked()
{

}

float decoratorBoxLarge::GetSizeBox() const
{
	return base.get()->size_box + 30;
}
