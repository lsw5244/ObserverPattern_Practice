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

			//std::cout << "���� : ����ȭ ���� �Ǿ����ϴ�.\n";
			std::cout << "���� ���Ƽ��ϴ�. \n";

			_hasTurned = true;
			Notify(); // ���� ���ֱ�
		}
	}
	else
	{
		_turnTime += Timer::GetDeltaTIme();
		if (_turnTime >= _turnCoolTime)
		{
			_turnTime = 0.0f;
			_turnCoolTime = GetRandomValue();

			//std::cout << "[System] ���� ���Ƽ���. \n";
			std::cout << "����ȭ ���� �Ǿ����ϴ�. \n";
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
