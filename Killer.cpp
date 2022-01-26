#include "Killer.h"
#include "YoungHee.h"
#include "Player.h"
#include <iostream>

void Killer::Init(/*const YoungHee* yh,*/ Player* players, int count)
{
	//_yh = yh;
	_players = players;
	//_playerCount = count;
	for (int i = 0; i < count; ++i)
	{
		_players[i].Subscribe(this); // �÷��̾�� �޽����� ����(����)
	}
}

void Killer::Update()
{
	/*if (_yh->HasTurned())
	{
		if (_hasChecked == false)
		{
			_hasChecked = true;

			for (int i = 0; i < _playerCount; ++i)
			{
				if (false == _players[i].IsDead() && _players[i].HasMoved())
				{
					_players[i].Die();

					std::cout << &_players[i] << "�� ����.\n";
				}
			}
		}
		
	}
	else
	{
		_hasChecked = false;
	}*/
}

void Killer::OnNotify(const Subject* sender)
{
	Player* player = (Player*)sender;
	player->Die();

	std::cout << player << "�� óġ��.\n";
}
