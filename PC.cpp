#include "PC.h"

void PC::showCharacteristics()
{
	cout << "PC characteristics:" << endl;
	cout << "Count: " << _count << endl;
	cout << "Price: " << _price << endl;
	cout << "IMEI: " << _IMEI << endl;
	cout << "Company: " << _company << endl;
	cout << "Memory: " << _memory << endl;
	cout << "Processor: " << _processor << endl;
	if (_updatable)
	{
		cout << "Updatable. " << endl;
	}
	else
	{
		cout << "Non - updatable. " << endl;
	}
	if (_mouse)
	{
		cout << "Have mouse  " << endl;
	}
	else
	{
		cout << "Dont have mouse  " << endl;
	}
	if (_keyboard)
	{
		cout << "Have keyboard  " << endl;
	}
	else
	{
		cout << "Dont have keyboard  " << endl;
	}
}

void PC::buy(int count)
{
	_count -= count;
	cout << "You bought PC " << count << endl;
	cout << "Count left: " << _count << endl;
}