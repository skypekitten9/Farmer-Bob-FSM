#include "State.h"

void State::SetMachine(const Machine* machine)
{
	this->machine = machine;
}

void State::Enter()
{
	currentTime = clock();
}

void State::Exit()
{
	delete this;
}

void State::Update()
{
	currentTime = clock();
}
