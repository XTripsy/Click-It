#ifndef BOX_H
#define BOX_H

#include "object.h"

class box : public object
{
protected:
	box() = default;

public:
	virtual ~box() = default;

public:
	virtual void clicked() = 0;

public:
	Vector2 GetCenterPosition();

public:
	Vector2 size_box;
	Rectangle bomb_box;
	Color color_box;
};

#endif