#ifndef DECORATOR_H
#define DECORATOR_H

#include <memory>

template<typename Tclass>
class decorator : public Tclass
{
public:
	decorator(std::unique_ptr<Tclass> class_) : base(std::move(class_)) {}
	~decorator() = default;

protected:
	std::unique_ptr<Tclass> base;
};

#endif