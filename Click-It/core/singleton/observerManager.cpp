#include "observerManager.h"

void observerManager::Init()
{

}

void observerManager::Update()
{

}

void observerManager::Shutdown()
{

}

void observerManager::addObserver(observer* obj)
{
	observers.push_back(obj);
}

void observerManager::removeObserver(observer* obj)
{
	observers.erase(std::remove(observers.begin(), observers.end(), obj), observers.end());
}

void observerManager::notifyObserver(const std::string& notif)
{
	for (auto* obs : observers)
	{
		obs->onNotify(notif);
	}
}
