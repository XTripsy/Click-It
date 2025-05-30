#ifndef LEVELTWO_H
#define LEVELTWO_H

#include "level.h"
#include "box.h"
#include <vector>
#include <memory>

class levelTwo : public level
{
public:
	levelTwo() = default;
	~levelTwo() = default;

public:
	virtual void Init() override;
	virtual void Click() override;

};

#endif