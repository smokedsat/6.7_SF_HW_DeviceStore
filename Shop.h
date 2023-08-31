#pragma once
#include <iostream>


class Shop
{
public:
	virtual void showCharacteristics() = 0{	}
	virtual void buy(int count) = 0;
	virtual ~Shop() = default;
};


class Device : virtual public Shop
{
public:
	Device(int count, int price, std::string & IMEI, std::string & company) : _count(count), _price(price), _IMEI(IMEI), _company(company){}

	virtual void showCharacteristics() override
	{
		std::cout << "Device: count, price, IMEI." << std::endl;
		std::cout << "Count: " << _count << std::endl;
		std::cout << "Price: " << _price << std::endl;
		std::cout << "IMEI: " << _IMEI << std::endl;
		std::cout << "Company: " << _company << std::endl;
	}
	virtual void buy(int count) override
	{
		if(count < _count)
			_count -= count;
	}
protected:
	int _count;
	int _price;
	std::string _company;
	std::string _IMEI;
};

class MoreCharacteristics : virtual public Shop
{
public:
	//MoreCharacteristics() = default;
	MoreCharacteristics(int memory, std::string & processor, bool updatable) : _memory(memory), _processor(processor), _updatable(updatable){ }

	MoreCharacteristics()
	{
		_memory = -1;
		_processor = "DEFAULT";
		_updatable = false;
	}

protected:
	int _memory;
	std::string _processor;
	bool _updatable;
};


