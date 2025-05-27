#ifndef FACTORY_H
#define FACTORY_H

#include <memory>
#include "raylib.h"

template<typename Tclass>
class factory
{
protected:
	factory() = default;

public:
	virtual ~factory() = default;

public:
	virtual std::unique_ptr<Tclass> create(Vector2 pos) = 0;
};

#endif