#include "PlantState.h"


void PlantState::Enter()
{
	State::Enter();
	cropAmount = 0;
	std::cout << "Oh boy, time to plant some crops!\n";
}

void PlantState::Exit()
{
	std::cout << "Wow, the field is already full! Talk about hard work!\n";
	State::Exit();
}

void PlantState::Update()
{
	State::Update();
	std::cout << "Planting crop...\n";
	cropAmount++;
	if (cropAmount == cropCapacity) 
		machine->TransitionToState(new WaitState());
}
