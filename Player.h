#pragma once
#include "Observer.h"
#include "Subject.h"
class YoungHee;

class Player : public Observer, public Subject
{
public:
	// 영희가 돌아서 있을 때 달리고
	// 영희가 돌아섰는지 체크해서 멈춤
	// 랜덤하게 움직임

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

