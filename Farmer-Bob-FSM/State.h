#pragma once
#include <ctime>
class State
{
	clock_t timerStart, currentTime;
	State() = delete;
public:
	virtual void Enter();
	virtual void Exit();
	virtual void Update();
	virtual void Init();
	virtual void CheckTransitions();
};

