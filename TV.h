#pragma once
#include "Shop.h"

class TV final : virtual public Device
{
public:
	TV(int count, int price, std::string &IMEI, std::string &company, int diagonal) : Device(count, price, IMEI, company), _diagonal(diagonal) {};
	
	virtual void showCharacteristics() override;
	virtual void buy(int count) override;
	virtual ~TV() {};
protected:
	int _diagonal;
};
