#include "Player.h"
#include "YoungHee.h"
#include "Random.h"
#include <iostream>

#define MIN_PROB 0.02
#define MAX_PROB 0.1


void Player::Init(YoungHee* yh)
{
	_isDead = false;
	//_yh = yh;
	_hasMoved = false;
	//_hasChecked = false;
	_movingProbability = Random::Range(MIN_PROB, MAX_PROB);

	yh->Subscribe(this);

}

void Player::Update()
{
	/*if (_isDead)
	{
		return;
	}

	if (_yh->HasTurned())
	{
		if (_hasChecked == false && CheckMoving())
		{
			std::cout << "[Player : " << this << "] 움직임\n";
			_hasMoved = true;
		}
		_hasChecked = true;
	}
	else
	{
		_hasMoved = false;
		_hasChecked = false;
	}*/
}

bool Player::HasMoved() const
{
	return _hasMoved;
}

void Player::Die()
{
	_isDead = true;
}

bool Player::IsDead() const
{
	return _isDead;
}

void Player::OnNotify(const Subject* sender)
{
	if (false == IsDead() && CheckMoving())
	{
		std::cout << this << "가 움찔거림\n";

		//OnNotify(this);
		Notify();
	}
}

bool Player::CheckMoving() const
{
	float prob = Random::Range(0.0f, 1.0f);

	if (prob <= _movingProbability)
	{
		return true;
	}
	return false;
	//return prob <= _movingProbability;
}
