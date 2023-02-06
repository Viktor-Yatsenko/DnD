#include "RandNumber.h"


int getRandomNumberCube(int min, int max)
	{
		std::random_device random;
		std::mt19937 gen(random());
		std::uniform_int_distribution<>distrib(min, max);
		return distrib(gen);
	}



