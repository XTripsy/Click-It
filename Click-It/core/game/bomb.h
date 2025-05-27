#ifndef BOMB_H
#define BOMB_H

#include "box.h"

struct Rectangle;
struct Color;

class bomb : public box
{
public:
	bomb();// = default;
	~bomb() = default;

public:
	virtual void Init() override;
	virtual void Update() override;

public:
	virtual void clicked() override;
};

#endif