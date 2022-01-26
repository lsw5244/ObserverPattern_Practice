#pragma once
#include <time.h>

class Timer
{
public:
	static void Init();
	static void Update();
	static float GetDeltaTIme();

private:
	static clock_t _lastTime;
	static float _deltaTime;
};

