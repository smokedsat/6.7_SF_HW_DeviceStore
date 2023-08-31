#include "Phone.h"

void Phone::showCharacteristics()
{
	std::cout << "Phone characteristics:" << std::endl;
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

	if (_touchPad)
		std::cout << "Have TouchPad  " << std::endl;
	else
		std::cout << "Dont have TouchPad  " << std::endl;
}

void Phone::buy(int count)
{
	_count -= count;
	std::cout << "You bought phones " << count << std::endl;
	std::cout << "Count left: " << _count << std::endl;
}

