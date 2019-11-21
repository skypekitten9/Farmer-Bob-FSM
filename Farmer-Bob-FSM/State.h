#pragma once
class State
{
	State() = delete;
public:
	virtual void Enter();
	virtual void Exit();
	virtual void Update();
	virtual void Init();
	virtual void CheckTransitions();
};

