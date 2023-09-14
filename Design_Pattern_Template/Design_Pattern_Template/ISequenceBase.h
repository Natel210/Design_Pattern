#pragma once
class ISequenceBase
{
	virtual void Begin() = 0;
	virtual void Run() = 0;
	virtual void End() = 0;
};

