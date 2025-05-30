#ifndef LEVELTHREE_H
#define LEVELTHREE_H

#include "level.h"
#include "box.h"
#include <vector>
#include <memory>

class levelThree : public level
{
public:
	levelThree() = default;
	~levelThree() = default;

public:
	virtual void Init() override;
	virtual void Click() override;

};

#endif