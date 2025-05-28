#ifndef OBSERVERMANAGER_H
#define OBSERVERMANAGER_H

#include "singleton.h"
#include "observer.h"
#include <vector>
#include <memory>

class observerManager : public singleton<observerManager>
{
public:
	observerManager() = default;
	~observerManager() = default;

public:
	virtual void Init() override;
	virtual void Update() override;
	virtual void Shutdown() override;

public:
	void addObserver(observer* obj);
	void removeObserver(observer* obj);
	void notifyObserver(const std::string& notif);

private:
	std::vector<observer*> observers;
};

#endif
