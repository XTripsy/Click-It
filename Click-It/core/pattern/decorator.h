#ifndef DECORATOR_H
#define DECORATOR_H

#include <iostream>
#include <memory>
#include "box.h"

template<typename Tclass>
class decorator : public Tclass
{
public:
	decorator(std::unique_ptr<Tclass> class_) : base(std::move(class_)) {}
	virtual ~decorator() = default;

protected:
	std::unique_ptr<Tclass> base;
};

#endif