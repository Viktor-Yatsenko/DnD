#include "Story.h"

void Story::Text()
{
	int choiceMassage;
	std::cin >> choiceMassage;
	switch (choiceMassage)
	{
	case 0:
	{
		std::string start("Start story");
		std::cout << start;
	}
		break;
	case 1:
	{
		std::string fiftinprocent("50% story");
		std::cout << fiftinprocent;
	}
		break;
	case 2:
	{
		std::string end("End story");
		std::cout << end;
	}
		break;
	}
}
