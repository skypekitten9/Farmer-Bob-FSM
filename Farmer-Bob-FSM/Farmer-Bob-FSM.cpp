#include <iostream>
#include "State.h"
#include <ctime>

int main()
{
	clock_t timerStart, currentTime;
	int timeToWait;
	std::cout << "How long shall I wait?\n";
	std::cin >> timeToWait;

	timerStart = clock();
	currentTime = clock();
	while (currentTime - timerStart < timeToWait)
	{
		currentTime = clock();
	}
	std::cout << "Finished!\n";
}
