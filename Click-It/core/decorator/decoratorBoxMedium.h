#ifndef DECORATORBOXMEDIUM_H
#define DECORATORBOXMEDIUM_H

#include "box.h"
#include "decorator.h"

class decoratorBoxMedium : public decorator<box>
{
public:
	using decorator::decorator;

	virtual float GetSizeBox() const override;
};

#endif