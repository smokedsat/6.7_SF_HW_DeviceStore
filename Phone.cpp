#include "Phone.h"

void Phone::showCharacteristics()
{
	cout << "Phone characteristics:" << endl;
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
	if (_touchPad)
	{
		cout << "Have TouchPad  " << endl;
	}
	else
	{
		cout << "Dont have TouchPad  " << endl;
	}
}

void Phone::buy(int count)
{
	_count -= count;
	cout << "You bought phones " << count << endl;
	cout << "Count left: " << _count << endl;
}
