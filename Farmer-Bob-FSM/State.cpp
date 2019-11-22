#include "State.h"

void State::SetMachine(Machine* machine)
{
	this->machine = machine;
}

State::~State()
{

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
