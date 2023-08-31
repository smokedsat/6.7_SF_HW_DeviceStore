#pragma once
#include "Shop.h"

class Phone  : virtual public Device, public MoreCharacteristics
{
public:
	Phone(int count, int price, std::string & IMEI, std::string & company ,int memory, std::string & processor, bool updatable, bool touchPad) :Device(count, price, IMEI, company), MoreCharacteristics(memory, processor, updatable), _touchPad(touchPad) {};
	virtual void showCharacteristics() override;
	virtual void buy(int count) override;
	virtual ~Phone() {};
protected:
	bool _touchPad;
};



