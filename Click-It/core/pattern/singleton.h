#ifndef SINGLETON_H
#define SINGLETON_H

template<typename Tclass>
class singleton
{
protected:
	singleton() = default;

public:
	virtual ~singleton() = default;

public:
	virtual void Init() = 0;
	virtual void Update() = 0;
	virtual void Shutdown() = 0;

public:
	static Tclass& GetInstance()
	{
		static Tclass instance;
		return instance;
	}

	singleton(const singleton&) = delete;
	singleton& operator=(const singleton&) = delete;
};

#endif
