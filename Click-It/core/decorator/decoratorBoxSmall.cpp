#include "decoratorBoxSmall.h"

void decoratorBoxSmall::Init()
{
	base->Init();
}

void decoratorBoxSmall::Update()
{
	base->Update();
}

void decoratorBoxSmall::SetIsDestroy(bool value)
{
	base->SetIsDestroy(value);
}

bool decoratorBoxSmall::GetIsDestroy()
{
	return base->GetIsDestroy();
}

void decoratorBoxSmall::clicked()
{
	base->clicked();
}

Rectangle decoratorBoxSmall::GetRectangleBox()
{
	Rectangle box = { base->GetPosition().x, base->GetPosition().y, GetSizeBox(), GetSizeBox() };
	return box;
}

float decoratorBoxSmall::GetSizeBox() const
{
	return base->GetSizeBox() + 10.0f;
}

Color decoratorBoxSmall::GetColorBox() const
{
	return base->GetColorBox();
}
