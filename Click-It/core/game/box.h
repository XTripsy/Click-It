#ifndef BOX_H
#define BOX_H

#include "object.h"

class box : public object
{
protected:
	box();

public:
	virtual ~box() = default;

public:
	virtual void clicked() = 0;
	virtual float GetSizeBox() const = 0;

public:
	Vector2 GetCenterPosition();

public:
	float size_box;
	Rectangle bomb_box;
	Color color_box;
};

#endif