#ifndef LEVELONE_H
#define LEVELONE_H

#include "level.h"
#include "box.h"
#include <vector>
#include <memory>

class levelOne : public level
{
public:
	levelOne() = default;
	~levelOne() = default;

public:
	virtual void Init() override;
	virtual void Click() override;
};

#endif