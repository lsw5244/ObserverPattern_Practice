#pragma once
#include "Observer.h"
#include "Subject.h"
class YoungHee;

class Player : public Observer, public Subject
{
public:
	// ���� ���Ƽ� ���� �� �޸���
	// ���� ���Ƽ����� üũ�ؼ� ����
	// �����ϰ� ������

	void Init(YoungHee* yh);
	void Update();

	bool HasMoved() const;

	void Die();

	bool IsDead() const;

	virtual void OnNotify(const Subject* sender) override;

private:
	bool CheckMoving() const;

private:
	bool _isDead;
	//const YoungHee* _yh;
	bool _hasMoved;
	//bool _hasChecked;
	float _movingProbability;
};

