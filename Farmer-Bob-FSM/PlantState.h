#pragma once
#include "State.h"
#include "WaitState.h"
class PlantState :
	public State
{
public:
	void Update() override;
};

