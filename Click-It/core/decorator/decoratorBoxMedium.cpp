#include "decoratorBoxMedium.h"

void decoratorBoxMedium::Init()
{
	base->Init();
}

void decoratorBoxMedium::Update()
{
	base->Update();
}

void decoratorBoxMedium::SetIsDestroy(bool value)
{
	base->SetIsDestroy(value);
}

bool decoratorBoxMedium::GetIsDestroy()
{
	return base->GetIsDestroy();
}

void decoratorBoxMedium::clicked()
{
	base->clicked();
}

Rectangle decoratorBoxMedium::GetRectangleBox()
{
	Rectangle box = { base->GetPosition().x, base->GetPosition().y, GetSizeBox(), GetSizeBox() };
	return box;
}

float decoratorBoxMedium::GetSizeBox() const
{
	return base->GetSizeBox() + 20.0f;
}

Color decoratorBoxMedium::GetColorBox() const
{
	return base->GetColorBox();
}
