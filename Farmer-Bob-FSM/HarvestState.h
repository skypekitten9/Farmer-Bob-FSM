#pragma once
#include "State.h"
#include "PlantState.h"
class HarvestState :
	public State
{
public:
	void Enter() override;
	void Exit() override;
	void Update() override;
};

