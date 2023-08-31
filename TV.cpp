#include "TV.h"

void TV::showCharacteristics()
{
	std::cout << "TV characteristics:" << std::endl;
	std::cout << "Count: " << _count << std::endl;
	std::cout << "Price: " << _price << std::endl;
	std::cout << "IMEI: " << _IMEI << std::endl;
	std::cout << "Company: " << _company << std::endl;
	std::cout << "Diagonal: " << _diagonal << std::endl;
}

void TV::buy(int count) 
{
	_count -= count;
	std::cout << "You bought TV:" << std::endl;
	std::cout << "Count left: " << _count << std::endl;
}
