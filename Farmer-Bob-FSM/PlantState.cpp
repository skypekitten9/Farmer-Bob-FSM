#include "PlantState.h"

void PlantState::Update()
{
	State::Update();
	State* ptr = new WaitState();
	machine->TransitionToState(ptr);
}
