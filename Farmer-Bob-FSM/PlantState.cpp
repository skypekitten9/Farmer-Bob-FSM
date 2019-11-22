#include "PlantState.h"

void PlantState::Update()
{
	State::Update();
	machine->TransitionToState(new WaitState());
}
