#include "WaitState.h"

void WaitState::DoRandomActivity()
{
	std::random_shuffle(activityVector.begin(), activityVector.end());
	std::cout << activityVector[0] << std::endl;
}

void WaitState::Enter()
{
	State::Enter();
	timerStart = clock();
	std::cout << "Now I will wait.. " << secondsToWait << " seconds should be enough! Oh boy!\n";
}

void WaitState::Exit()
{
	std::cout << "Oh boy! The wait is finally over!\n\n";
	State::Exit();
}

void WaitState::Update()
{
	State::Update();
	if ((currentTime - timerStart) / 1000 > secondsToWait)
		machine->TransitionToState(new HarvestState());
	else
		DoRandomActivity();
}
