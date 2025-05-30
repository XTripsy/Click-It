#ifndef LEVEL_H
#define LEVEL_H

#include <memory>
#include <vector>
#include "box.h"

class level
{
protected:
	level() = default;

public:
	virtual ~level() = default;
	virtual void Init() = 0;
	virtual void Update();
	virtual void Click() = 0;

protected:
	std::vector<std::unique_ptr<box>> boxs;
};

#endif