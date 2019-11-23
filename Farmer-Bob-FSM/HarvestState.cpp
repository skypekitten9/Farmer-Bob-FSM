#include "HarvestState.h"

void HarvestState::Enter()
{
	State::Enter();
	cropAmount = cropCapacity;
	std::cout << "Alright let's harvest some crops! Oh I'm so hyped!\n";
}

void HarvestState::Exit()
{
	std::cout << "That's the last one! Big harvest this week.\n\n";
	State::Exit();
}

void HarvestState::Update()
{
	State::Update();
	cropAmount--;
	std::cout << "Harvesting crop...\n";
	if (cropAmount == 0)
		machine->TransitionToState(new PlantState());
}
