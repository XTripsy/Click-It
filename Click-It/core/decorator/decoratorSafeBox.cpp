#include "observerManager.h"

#include "decoratorSafeBox.h"

void decoratorSafeBox::Init()
{
	base->Init();
}

void decoratorSafeBox::Update()
{
	DrawRectangleRec(GetRectangleBox(), GetColorBox());
}

void decoratorSafeBox::SetIsDestroy(bool value)
{
	base->SetIsDestroy(value);
}

bool decoratorSafeBox::GetIsDestroy()
{
	return base->GetIsDestroy();
}

void decoratorSafeBox::clicked()
{
	if (!CheckCollisionPointRec(GetMousePosition(), GetRectangleBox())) return;

	observerManager::GetInstance().notifyObserver("safeBox");
	base->SetIsDestroy(true);
}

Rectangle decoratorSafeBox::GetRectangleBox()
{
	return base->GetRectangleBox();
}

float decoratorSafeBox::GetSizeBox() const
{
	return base->GetSizeBox();
}

Color decoratorSafeBox::GetColorBox() const
{
	return RAYWHITE;
}
