#include <iostream>
#include "Machine.h"
#include "PlantState.h"
#include <ctime>

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	Machine machine = Machine(new PlantState());
	while (true)
	{
		machine.Update();
	}
}
