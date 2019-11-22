#pragma once
#include "State.h"
#include "HarvestState.h"
class WaitState :
	public State
{
public:
	void Update() override;
};

