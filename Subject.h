#pragma once
#include <vector>

class Observer;
class Subject
{
public:
	virtual ~Subject();

	void Subscribe(Observer* observer);
	void Desubscribe(Observer* observer);
	void Notify();

private:
	std::vector<Observer*> _observers;
};

