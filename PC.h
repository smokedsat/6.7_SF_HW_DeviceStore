#pragma once
#include "Shop.h"

class PC final : virtual public Device,virtual public MoreCharacteristics
{
public:
	PC(int count, int price, std::string &IMEI, std::string &company, bool mouse, bool keyboard,int memory, std::string &processor, bool updatable) : Device(count,price,IMEI, company), MoreCharacteristics(memory,processor,updatable), _mouse(mouse), _keyboard(keyboard) {};
	virtual void showCharacteristics() override;
	virtual void buy(int count) override;
protected:
	bool _mouse;
	bool _keyboard;
};
