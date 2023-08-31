#include "PC.h"

void PC::showCharacteristics()
{
	std::cout << "PC characteristics:" << std::endl;
	std::cout << "Count: " << _count << std::endl;
	std::cout << "Price: " << _price << std::endl;
	std::cout << "IMEI: " << _IMEI << std::endl;
	std::cout << "Company: " << _company << std::endl;
	std::cout << "Memory: " << _memory << std::endl;
	std::cout << "Processor: " << _processor << std::endl;

	if (_updatable)
		std::cout << "Updatable. " << std::endl;
	else
		std::cout << "Non - updatable. " << std::endl;

	if (_mouse)
		std::cout << "Have mouse  " << std::endl;
	else
		std::cout << "Dont have mouse  " << std::endl;

	if (_keyboard)
		std::cout << "Have keyboard  " << std::endl;
	else
		std::cout << "Dont have keyboard  " << std::endl;
}

void PC::buy(int count)
{
	_count -= count;
	std::cout << "You bought PC " << count << std::endl;
	std::cout << "Count left: " << _count << std::endl;
}
