#ifndef DECORATORBOXMEDIUM_H
#define DECORATORBOXMEDIUM_H

#include "decorator.h"

class decoratorBoxMedium : public decorator<box>
{
public:
	decoratorBoxMedium() = default;
	virtual ~decoratorBoxMedium() = default;

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