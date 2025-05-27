#ifndef FACTORYCAMERA_H
#define FACTORYCAMERA_H

#include <memory>
#include "factory.h"
#include "camera.h"

class factoryCamera : public factory<camera>
{
public:
	factoryCamera() = default;
	~factoryCamera() = default;

public:
	virtual std::unique_ptr<camera> create(Vector2 pos) override;
};

#endif