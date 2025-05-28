#ifndef FACTORYBOMB_H
#define FACTORYBOMB_H

#include "factory.h"
#include "box.h"

class factoryBomb : public factory<box>
{
public:
	factoryBomb() = default;
	~factoryBomb() = default;

public:
	virtual std::unique_ptr<box> create(Vector2 pos) override;
};

#endif
