#ifndef SCOREMANAGER_H
#define SCOREMANAGER_H

#include "singleton.h"
#include "observer.h"

class scoreManager : public singleton<scoreManager>, public observer
{
public:
	scoreManager() = default;
	~scoreManager() = default;

public:
	virtual void Init() override;
	virtual void Update() override;
	virtual void Shutdown() override;
	virtual void onNotify(const std::string& notif) override;

public:
	void bombNotif();

private:
	float score;
};

#endif
