#include "Timer.h"
#include <iostream>

clock_t Timer::_lastTime = 0;
float Timer::_deltaTime = 0.0f;

void Timer::Init()
{
    _lastTime = clock();
}

void Timer::Update()
{
    clock_t currTime = clock();

    _deltaTime = (currTime - _lastTime) / (float)CLOCKS_PER_SEC;

    _lastTime = currTime;
}

float Timer::GetDeltaTIme()
{
    return _deltaTime;
}
