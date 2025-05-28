#ifndef DECORATORBOXSMALL_H
#define DECORATORBOXSMALL_H

#include "box.h"
#include "decorator.h"

class decoratorBoxSmall : public decorator<box>
{
public:
	using decorator::decorator;

	virtual float GetSizeBox() const override;
};

#endif