#pragma once
#include <ctime>
#include "Machine.h"
class State
{
	//Data
private:
	clock_t timerStart, currentTime;
protected:
	const Machine* machine;

	//Functions
private:
	State() = delete;
public:
	void SetMachine(const Machine* achine);
	virtual void Enter();
	virtual void Exit();
	virtual void Update();
};

