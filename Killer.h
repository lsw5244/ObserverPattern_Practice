#pragma once
#include "Observer.h"

class YoungHee;
class Player;

class Killer : public Observer
{
public:
	void Init(/*const YoungHee* yh, */Player* players, int count);
	void Update();

	void OnNotify(const Subject* sender) override;
private:
	//const YoungHee* _yh;
	Player* _players;
	//int _playerCount;
	bool _hasChecked;
};

