#pragma once
class Subject;
// �߻�Ŭ������ ( ���� �����Լ��� ������ �߻�Ÿ���� )
class Observer/* abstract*/
{
public:
	virtual void OnNotify(const Subject* sender) = 0;
};

