#pragma once
#include "Subject.h"

class YoungHee : public Subject
{
public:
	// ���� �ð� ���� ����ߴٰ� ���Ƽ�
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

