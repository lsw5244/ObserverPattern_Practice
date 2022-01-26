#include "YoungHee.h"
#include "Random.h"
#include "Timer.h"
#include <iostream>

#define minCoolTime 1.5f
#define maxCoolTime 3.12f

void YoungHee::Init()
{
	_hasTurned = false;
	_waitCoolTime = GetRandomValue();
	_waitTime = 0.0f;
	_turnCoolTime = GetRandomValue();
	_turnTime = 0.0f;
}

void YoungHee::Update()
{
	if (_hasTurned == false)
	{
		_waitTime += Timer::GetDeltaTIme();

		if (_waitTime >= _waitCoolTime)
		{
			_waitTime = 0.0f;

			_waitCoolTime = _waitCoolTime = Random::Range(minCoolTime, maxCoolTime);

			//std::cout << "¿µÈñ : ¹«±ÃÈ­ ²ÉÀÌ ÇÇ¾ú½À´Ï´Ù.\n";
			std::cout << "¿µÈñ°¡ µ¹¾Æ¼·´Ï´Ù. \n";

			_hasTurned = true;
			Notify(); // ÅëÁö ÇØÁÖ±â
		}
	}
	else
	{
		_turnTime += Timer::GetDeltaTIme();
		if (_turnTime >= _turnCoolTime)
		{
			_turnTime = 0.0f;
			_turnCoolTime = GetRandomValue();

			//std::cout << "[System] ¿µÈñ°¡ µ¹¾Æ¼¹´Ù. \n";
			std::cout << "¹«±ÃÈ­ ²ÉÀÌ ÇÇ¾ú½À´Ï´Ù. \n";
			_hasTurned = false;
		}
	}
}

bool YoungHee::HasTurned() const
{
	return _hasTurned;
}

float YoungHee::GetRandomValue()
{
	return Random::Range(minCoolTime, maxCoolTime);
}
