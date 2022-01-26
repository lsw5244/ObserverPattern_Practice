#include "Subject.h"
#include "Observer.h"

#include <algorithm>

Subject::~Subject()
{
	_observers.clear();
}

void Subject::Subscribe(Observer* observer)
{
	_observers.push_back(observer);
}

void Subject::Desubscribe(Observer* observer)
{
	std::remove(_observers.begin(), _observers.end(), observer);
}

void Subject::Notify()
{
	for (size_t i = 0; i < _observers.size(); ++i)
	{
		_observers[i]->OnNotify(this);
	}
}
