#pragma once
#include "Factory1.h"
#include "Factory2.h"

// ��� ���丮�� ���� ��ü�� ���� �����ϴ� ������ �Դϴ�.

class AbstractFactory
{
public:
	void Make(int fac)
	{
		if (fac == 1)
			f1.Make();
		else if (fac == 2)
			f2.Make();
	}
private:
	Factory1 f1;
	Factory2 f2;
};

