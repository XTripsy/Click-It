#ifndef FACTORYBOX_H
#define FACTORYBOX_H

#include "factory.h"
#include "box.h"

class factoryBox : public factory<box>
{
public:
	factoryBox() = default;
	~factoryBox() = default;

public:
	virtual std::unique_ptr<box> create(Vector2 pos) override;
};

#endif