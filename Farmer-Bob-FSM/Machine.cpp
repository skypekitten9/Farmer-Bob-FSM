#include "Machine.h"

Machine::Machine(State* state) : currentState(state)
{
	currentState->SetMachine(this);
}

void Machine::TransitionToState(State* state)
{
	currentState->Exit();
	currentState = state;
	currentState->SetMachine(this);
	currentState->Enter();

}

void Machine::Update()
{
	currentState->Update();
}

Machine::~Machine()
{
	delete currentState;
}
