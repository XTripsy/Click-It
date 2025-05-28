#ifndef DECORATORBOXLARGE_H
#define DECORATORBOXLARGE_H

#include "decorator.h"
#include "box.h"

class decoratorBoxLarge : public decorator<box>
{
public:
	using decorator ::decorator;

public:
	virtual void Init() override;
	virtual void Update() override;
	virtual void clicked() override;
	virtual float GetSizeBox() const override;
};

#endif