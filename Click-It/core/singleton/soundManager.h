#ifndef SOUNDMANAGER_H
#define SOUNDMANAGER_H

#include "singleton.h"
#include "observer.h"

class soundManager : public singleton<soundManager>, public observer
{
public:
	soundManager() = default;
	~soundManager() = default;

public:
	virtual void Init() override;
	virtual void Update() override;
	virtual void Shutdown() override;
	virtual void onNotify(const std::string& notif) override;

private:
	void sfxBomb();
};

#endif