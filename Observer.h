#pragma once
class Subject;
// 추상클래스임 ( 순수 가상함수가 있으면 추상타입임 )
class Observer/* abstract*/
{
public:
	virtual void OnNotify(const Subject* sender) = 0;
};

