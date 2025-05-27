#ifndef OBJECT_H
#define OBJECT_H

#include "raylib.h"

class object
{
protected:
	object() = default;

public:
	virtual ~object() = default;

public:
	virtual void Init() = 0;
	virtual void Update() = 0;

public:
	void SetPosition(Vector2 pos);
	Vector2 GetPosition();

private:
	Vector2 position;
};

#endif