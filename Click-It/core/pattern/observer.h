#ifndef OBSERVER_H
#define OBSERVER_H

#include <string>

class observer
{
protected:
	observer() = default;

public:
	virtual ~observer() = default;
	virtual void onNotify(const std::string& notif) = 0;
};

#endif