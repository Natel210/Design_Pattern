#pragma once
#include "UserTString.h"
class AObjectBase
{
public: // Name
	bool SetName(const TString& name);
	const TString& GetName();

public: // ClassName
	const TString& GetClassName();

protected:
	AObjectBase(const TString& name, const TString& className);
	virtual ~AObjectBase() = 0;

private:
	TString _name = TX("");
	const TString _className;

};

