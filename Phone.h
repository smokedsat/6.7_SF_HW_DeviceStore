#pragma once
#include "Shop.h"

class Phone  : virtual public Device, public MoreChar
{
public:
	Phone(int count, int price, string IMEI, string company ,int memory, string processor, bool updatable, bool touchPad) :Device(count, price, IMEI, company), MoreChar(memory, processor, updatable), _touchPad(touchPad) {};
	virtual void showCharacteristics() override;
	virtual void buy(int count) override;
	virtual ~Phone() {};
protected:
	bool _touchPad;
};

