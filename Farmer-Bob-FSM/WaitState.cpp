#include "WaitState.h"

void WaitState::Update()
{
	State::Update();
	machine->TransitionToState(new HarvestState());
}
