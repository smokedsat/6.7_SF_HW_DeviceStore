#pragma once
#include <iostream>
using namespace std;

class Shop
{
public:
	virtual void showCharacteristics() = 0
	{

	}
	virtual void buy(int count) = 0;
	virtual ~Shop() = default;
};



class Device : virtual public Shop
{
public:
	Device(int count, int price, string IMEI, string company) : _count(count), _price(price), _IMEI(IMEI), _company(company)
	{

	}

	virtual void showCharacteristics() override
	{
		cout << "Device: count, price, IMEI." << endl;
		cout << "Count: " << _count << endl;
		cout << "Price: " << _price << endl;
		cout << "IMEI: " << _IMEI << endl;
		cout << "Company: " << _company << endl;
	}
	virtual void buy(int count) override
	{
	}
	int _count;
	int _price;
	string _company;
	string _IMEI;
};

class MoreChar : virtual public Shop
{
public:
	//MoreChar() = default;
	MoreChar(int memory, string processor, bool updatable) : _memory(memory), _processor(processor), _updatable(updatable)
	{

	}

protected:
	int _memory;
	string _processor;
	bool _updatable;
};

