#ifndef HEALTHMANAGER_H
#define HEALTHMANAGER_H

#include "singleton.h"
#include "observer.h"

class healthManager : public singleton<healthManager>, public observer
{
public:
	healthManager() = default;
	~healthManager() = default;

public:
	virtual void Init() override;
	virtual void Update() override;
	virtual void Shutdown() override;
	virtual void onNotify(const std::string& notif) override;

private:
	float health;
};

#endif