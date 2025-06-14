#ifndef DECORATORBOMBBOX
#define DECORATORBOMBBOX

#include "decorator.h"

class decoratorBombBox : public decorator<box>
{
public:
	decoratorBombBox() = default;
	virtual ~decoratorBombBox() = default;

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