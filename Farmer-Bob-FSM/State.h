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

	//Methods
private:
	State() = delete;
public:
	void SetMachine(const Machine* achine);
	virtual void Enter() = 0;
	virtual void Exit() = 0;
	virtual void Update();
	virtual void Init() = 0;
	virtual void CheckTransitions() = 0;
};

