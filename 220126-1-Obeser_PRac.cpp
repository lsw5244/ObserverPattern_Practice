#include <iostream>
#include "Timer.h"
#include "Random.h"
#include "YoungHee.h"
#include <thread>
#include "Player.h"
#include "Killer.h"

using namespace std;

int main()
{
	Timer::Init();
	Random::Init();

	YoungHee yh;
	yh.Init();

	Player players[10];
	for (int i = 0; i < 10; ++i)
	{
		players[i].Init(&yh);
	}
	Killer killer;
	//killer.Init(&yh, players, 10);
	killer.Init(players, 10);
	
	while (true)
	{
		Timer::Update();

		yh.Update();

		//killer.Update();

		//for (int i = 0; i < 10; ++i)
		//{
		//	players[i].Update();
		//}
		//killer.Update();
		//std::this_thread::sleep_for(1ms);
	}

}