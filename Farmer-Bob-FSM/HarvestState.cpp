#include "HarvestState.h"

void HarvestState::Update()
{
	State::Update();
	machine->TransitionToState(new PlantState());
}
