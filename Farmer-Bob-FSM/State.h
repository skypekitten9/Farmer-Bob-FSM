#pragma once
#include <ctime>
#include "ForwardDeclarations.h"
#include "Machine.h"
class State
{
	//Data
protected:
	clock_t timerStart = clock(), currentTime = clock();
	Machine* machine = nullptr;

	//Functions
public:
	void SetMachine(Machine* machine);
	virtual ~State();
	virtual void Enter();
	virtual void Exit();
	virtual void Update();
};

