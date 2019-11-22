#include "State.h"

void State::SetMachine(const Machine* machine)
{
	this->machine = machine;
}

void State::Update()
{
	currentTime = clock();
}
