#ifndef TIMEMANAGER_H
#define TIMEMANAGER_H

#include "singleton.h"

class timeManager : public singleton<timeManager>
{
public:
	timeManager() = default;
	~timeManager() = default;

public:
	virtual void Init() override;
	virtual void Update() override;
	virtual void Shutdown() override;

public:
	void AddTime();

private:
	float time, currentTime;
};

#endif