#pragma once
#include "State.h"
#include "HarvestState.h"
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
class WaitState :
	public State
{
	//Data
private:
	int secondsToWait = 5;
	std::vector<std::string> activityVector = { "Zzz...", "Playing tennis...", "Watching TV...", "Regular waiting...", 
												"Drawing...", "Passing time...", "Reading...", "Eating..." };

	//Functions
private:
	void DoRandomActivity();
public:
	void Enter() override;
	void Exit() override;
	void Update() override;
};

