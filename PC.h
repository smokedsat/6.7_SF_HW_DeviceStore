#pragma once
#include "Shop.h"

class PC final : virtual public Device,virtual public MoreChar
{
public:
	PC(int count, int price, string IMEI, string company, bool mouse, bool keyboard,int memory, string processor, bool updatable) : Device(count,price,IMEI, company), MoreChar(memory,processor,updatable), _mouse(mouse), _keyboard(keyboard) {};
	virtual void showCharacteristics() override;
	virtual void buy(int count) override;
protected:
	bool _mouse;
	bool _keyboard;
};