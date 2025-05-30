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
	virtual void SetPosition(Vector2 pos) = 0;
	virtual Vector2 GetPosition() = 0;
	virtual void SetIsDestroy(bool value) = 0;
	virtual bool GetIsDestroy() = 0;

};

#endif