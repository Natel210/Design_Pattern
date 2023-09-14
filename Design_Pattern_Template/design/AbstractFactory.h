#pragma once
#include "Factory1.h"
#include "Factory2.h"

// 어떠한 팩토리의 생성 자체를 통합 관리하는 디자인 입니다.

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

