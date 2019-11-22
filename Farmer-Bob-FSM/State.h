#pragma once
#include <ctime>
#include "ForwardDeclarations.h"
#include "Machine.h"
#include <iostream>
class State
{
	//Data
protected:
	clock_t timerStart = clock(), currentTime = clock();
	Machine* machine = nullptr;
	int cropCapacity = 10;
	int cropAmount = 0;

	//Functions
public:
	void SetMachine(Machine* machine);
	virtual ~State();
	virtual void Enter();
	virtual void Exit();
	virtual void Update();
};

