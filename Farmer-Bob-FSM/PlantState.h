#pragma once
#include "State.h"
#include "WaitState.h"
class PlantState :
	public State
{
public:
	void Enter() override;
	void Exit() override;
	void Update() override;
};

