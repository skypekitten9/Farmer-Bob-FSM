#pragma once
#include "State.h"
#include "ForwardDeclarations.h"
class Machine
{
	//Data
private:
	State* currentState = nullptr;

	//Functions
public:
	Machine(State* state);
	void TransitionToState(State* state);
	void Update();
	~Machine();
};

