#include "observerManager.h"
#include <iostream>

#include "baseBox.h"

void baseBox::Init()
{
	std::cout << "Init" << std::endl;
}

void baseBox::Update()
{
	std::cout << "Update" << std::endl;
}

void baseBox::clicked()
{
	std::cout << "Clicked" << std::endl;
}

Rectangle baseBox::GetRectangleBox()
{
	Rectangle box;
	return box;
}

float baseBox::GetSizeBox() const
{
	return 0.0f;
}

Color baseBox::GetColorBox() const
{
	return BLACK;
}
