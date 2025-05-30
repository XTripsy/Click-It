#ifndef BOX_H
#define BOX_H

#include "object.h"

class box : public object
{
protected:
	box() = default;

public:
	virtual ~box() = default;

public:
	virtual void Init() override;
	virtual void Update() override;
	virtual void SetPosition(Vector2 pos) override;
	virtual Vector2 GetPosition() override;
	virtual void SetIsDestroy(bool value) override;
	virtual bool GetIsDestroy() override;

	virtual void clicked() = 0;
	virtual Rectangle GetRectangleBox() = 0;
	virtual float GetSizeBox() const = 0;
	virtual Color GetColorBox() const = 0;

private:
	Vector2 position;
	bool isDestroy;
};

#endif