#include "observerManager.h"

#include "decoratorBoxLarge.h"

void decoratorBoxLarge::Init()
{
	base->Init();
}

void decoratorBoxLarge::Update()
{
	base->Update();
}

void decoratorBoxLarge::SetIsDestroy(bool value)
{
	base->SetIsDestroy(value);
}

bool decoratorBoxLarge::GetIsDestroy()
{
	return base->GetIsDestroy();
}

void decoratorBoxLarge::clicked()
{	
	base->clicked();
}

Rectangle decoratorBoxLarge::GetRectangleBox()
{
	Rectangle box = { base->GetPosition().x, base->GetPosition().y, GetSizeBox(), GetSizeBox() };
	return box;
}

float decoratorBoxLarge::GetSizeBox() const
{
	return base->GetSizeBox() + 30.0f;
}

Color decoratorBoxLarge::GetColorBox() const
{
	return base->GetColorBox();
}
