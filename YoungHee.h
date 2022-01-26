#pragma once
#include "Subject.h"

class YoungHee : public Subject
{
public:
	// 일정 시간 동안 대기했다가 돌아섬
	void Init();
	void Update();
	
	bool HasTurned() const;
private:
	bool _hasTurned;
	float _waitCoolTime;
	float _waitTime;
	float _turnCoolTime;
	float _turnTime;

	float GetRandomValue();
};

