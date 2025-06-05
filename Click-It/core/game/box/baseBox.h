#ifndef BASEBOX_H
#define BASEBOX_H

#include "box.h"

class baseBox : public box
{
public:
	baseBox() = default;
	virtual ~baseBox() = default;

public:
	virtual void Init() override;
	virtual void Update() override;

	virtual void clicked() override;
	virtual Rectangle GetRectangleBox() override;
	virtual float GetSizeBox() const override;
	virtual Color GetColorBox() const override;
};

#endif
