#ifndef DECORATORBOXSMALL_H
#define DECORATORBOXSMALL_H

#include "decorator.h"

class decoratorBoxSmall : public decorator<box>
{
public:
	decoratorBoxSmall() = default;
	virtual ~decoratorBoxSmall() = default;

public:
	using decorator<box>::decorator;

public:
	virtual void Init() override;
	virtual void Update() override;
	virtual void SetIsDestroy(bool value) override;
	virtual bool GetIsDestroy() override;

	virtual void clicked() override;
	virtual Rectangle GetRectangleBox() override;
	virtual float GetSizeBox() const override;
	virtual Color GetColorBox() const override;
};

#endif