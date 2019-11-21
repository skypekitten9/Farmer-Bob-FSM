#pragma once
class State
{
	State() = delete;
public:
	virtual void Enter();
	virtual void Exit();
	virtual void Update(int t);
	virtual void Init();
	virtual void CheckTransitions(int t);
};

