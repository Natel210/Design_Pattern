#include "AObjectBase.h"

bool AObjectBase::SetName(const TString& name)
{
	if (0 != name.compare(_name))
	{
		_name = name;
		return true;
	}
	return false;
}

const TString& AObjectBase::GetName()
{
	return _name;
}

const TString& AObjectBase::GetClassName()
{
	return _className;
}

AObjectBase::AObjectBase(const TString& name, const TString& className) : _name(name), _className(className)
{

}

AObjectBase::~AObjectBase()
{
	_name.clear();
}
