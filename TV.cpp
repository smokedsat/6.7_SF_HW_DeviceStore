#include "TV.h"

void TV::showCharacteristics()
{
	cout << "TV characteristics:" << endl;
	cout << "Count: " << _count << endl;
	cout << "Price: " << _price << endl;
	cout << "IMEI: " << _IMEI << endl;
	cout << "Company: " << _company << endl;
	cout << "Diagonal: " << _diagonal << endl;
}

void TV::buy(int count) 
{
	_count -= count;
	cout << "You bought TV:" << endl;
	cout << "Count left: " << _count << endl;
}
