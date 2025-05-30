#ifndef LEVELLOOP_H
#define LEVELLOOP_H

#include "level.h"
#include "decorator.h"

const int GRID_SIZE = 50;
const int GRID_WIDTH = 12;
const int GRID_HEIGHT = 12;


class levelLoop : public level
{
public:
	levelLoop() = default;
	~levelLoop() = default;

public:
	virtual void Init() override;
	virtual void Click() override;

public:
	void CreateBoxs();
	void CreateSafeBox();
	void CreateBombBox();
	void ResetLevel();
	std::unique_ptr<decorator<box>> CreateSizeBox(std::unique_ptr<box> box);
	int RandomNumer(int start, int end);
	std::pair<int, int> GetRandomPosition();

private:
	int startScore, goalScore;
	int totalSafeBox;
	bool grid[GRID_WIDTH][GRID_HEIGHT] = { false };
};

#endif