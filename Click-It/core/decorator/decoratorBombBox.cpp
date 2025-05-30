#include "observerManager.h"
#include <iostream>

#include "decoratorBombBox.h"

void decoratorBombBox::Init()
{
	base->Init();
}

void decoratorBombBox::Update()
{
	DrawRectangleRec(GetRectangleBox(), GetColorBox());
}

void decoratorBombBox::SetIsDestroy(bool value)
{
	base->SetIsDestroy(value);
}

bool decoratorBombBox::GetIsDestroy()
{
	return base->GetIsDestroy();
}

void decoratorBombBox::clicked()
{
	if (!CheckCollisionPointRec(GetMousePosition(), GetRectangleBox())) return;

	observerManager::GetInstance().notifyObserver("bombBox");
	base->SetIsDestroy(true);
}

Rectangle decoratorBombBox::GetRectangleBox()
{
	return base->GetRectangleBox();
}

float decoratorBombBox::GetSizeBox() const
{
	return base->GetSizeBox();
}

Color decoratorBombBox::GetColorBox() const
{
	return RED;
}
