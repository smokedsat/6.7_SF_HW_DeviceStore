#include "Shop.h"
#include "PC.h"
#include "TV.h"
#include "Phone.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	Device* device[5];
	std::string IMEI, company,processor;
	IMEI = "TTTBV20DDDD";
	company = "APPLE";
	device[0] = new TV(100, 157099, IMEI, company, 32000); 


	IMEI = "4394240FSDIIII2329";
	company = "ASUS";
	processor = "X64";
	device[1] = new PC(300 ,45999, IMEI, company, true, true,  500000, processor, true); 
	
	IMEI = "TTTBV20310DDDD";
	company = "SAMSUNG";
	processor = "ARM7";
	device[2] = new TV(500, 67099, IMEI, company, 8196); // Количество, цена, IMEI, компания, память в мб

	IMEI = "439929DSD920000";
	company = "APPLE";
	processor = "M2PRO";
	device[3] = new Phone(100, 36300, IMEI, company, 32000, processor, true, true); // Количество, цена, IMEI, компания, память в мб, процессор, тачпад, обновляемый

	IMEI = "43992D920000";
	processor = "M5";
	device[4] = new Phone(150, 59300, IMEI, company, 172000, processor, true, true); // Количество, цена, IMEI, компания, память в мб, процессор, тачпад, обновляемый

	bool opened = true;
	while (opened)
	{
		std::cout << "Welcome to the Electronics Shop. " << std::endl;
		std::cout << "Please make a choice: 1 - TV\'s, 2 - Phones, 3 - PC\'s. 0 - Exit." << std::endl;
		short point = 0;
		short type = 0;
		short _do = 0;
		short __count = 0;
		short this_;
		std::cin >> point;
		switch (point)
		{
		case 1:
			std::cout << "You chosed TV . 1 - Apple, 2 - Samsung; 0 - return back." << std::endl;
			std::cin >> type;
			switch (type)
			{

			case 1:
				std::cout << "Apple." << std::endl;
				std::cout << "1 device available:" << std::endl;
				device[0]->showCharacteristics();
				std::cout << std::endl << "You can choose 2 options. 1 - Buy. 0 - Return back." << std::endl;
				std::cin >> _do;
				if (_do == 1)
				{
					dpoint:
					std::cout << "How much would you like to buy?" << std::endl;
					std::cin >> __count;
					if (__count <= 0)
					{
						std::cout << "You cant buy less than 1 device" << std::endl;
						goto dpoint;
					}
					if (__count > 0)
					{
						device[0]->buy(__count);
						break;
					}
				}
				break;
			case 2:
				std::cout << "Samsung." << std::endl;
				std::cout << "1 device available:" << std::endl;
				device[2]->showCharacteristics();
				std::cout << std::endl << "Что вы хотите сделать с данным товаром? Вам доступно 2 опции. 1 - купить 0 - вернуться на раздел выше" << std::endl;
				std::cin >> _do;
				if (_do == 1)
				{
					//Маркер cpoint
				cpoint:
					std::cout << "Сколько вы хотите купить? " << std::endl;
					std::cin >> __count;
					if (__count <= 0)
					{
						std::cout << "Вы не можете купить меньше 1 товара" << std::endl;
						goto cpoint;
					}
					if (__count > 0)
					{
						device[2]->buy(__count);
						break;
					}
				}
				break;
			case 0:
				break;
			default:
				std::cout << "Введите 0, 1 или 2." << std::endl;
				break;
			}
		case 2:
			std::cout << "Вы выбрали раздел телефоны. 1 - Apple, 0 - возврат на уровень выше." << std::endl;
			std::cin >> type;
			switch (type)
			{
			case 1:
				std::cout << "Раздел Apple" << std::endl;
				std::cout << "Вам доступно 2 товара:" << std::endl;
				device[3]->showCharacteristics();
				std::cout << std::endl << std::endl;
				device[4]->showCharacteristics();
				std::cout << std::endl << "Чтобы выбрать первый товар, введите 1, чтобы выбрать второй - введите 2:" << std::endl;

				std::cin >> this_;
				if (this_ == 1)
				{
					device[3]->showCharacteristics();
					std::cout << std::endl << "Что вы хотите сделать с данным товаром? Вам доступно 2 опции. 1 - купить 0 - вернуться на раздел выше" << std::endl;
					std::cin >> _do;
					if (_do == 1)
					{
						//Маркер rpoint
					rpoint:
						std::cout << "Сколько вы хотите купить? " << std::endl;
						std::cin >> __count;
						if (__count <= 0)
						{
							std::cout << "Вы не можете купить меньше 1 товара" << std::endl;
							goto rpoint;
						}
						if (__count > 0)
						{
							device[3]->buy(__count);
							break;
						}
					}
					if (_do == 0)
					{
						break;
					}
				}
				if (this_ == 2)
				{
					device[4]->showCharacteristics();
					std::cout << std::endl << "Что вы хотите сделать с данным товаром? Вам доступно 2 опции. 1 - купить 0 - вернуться на раздел выше" << std::endl;
					std::cin >> _do;
					if (_do == 1)
					{
						//Маркер tpoint
					tpoint:
						std::cout << "Сколько вы хотите купить? " << std::endl;
						std::cin >> __count;
						if (__count <= 0)
						{
							std::cout << "Вы не можете купить меньше 1 товара" << std::endl;
							goto tpoint;
						}
						if (__count > 0)
						{
							device[4]->buy(__count);
							break;
						}
					}
					if (_do == 0)
					{
						break;
					}
				}
				break;
			case 0:
				break;
			default:
				std::cout << "Введите 0 или 1." << std::endl;
				break;
			}
			break;
		case 3:
			std::cout << "Вы выбрали раздел компьютеры." << std::endl;
			std::cout << "Вам доступен 1 компьютер: " << std::endl;
			device[1]->showCharacteristics();
			std::cout << std::endl << "Что вы хотите сделать с данным товаром? Вам доступно 2 опции. 1 - купить 0 - вернуться на раздел выше" << std::endl;
			std::cin >> _do;
			if (_do == 1)
			{
				//Маркер pvpoint
			pvpoint:
				std::cout << "Сколько вы хотите купить? " << std::endl;
				std::cin >> __count;
				if (__count <= 0)
				{
					std::cout << "Вы не можете купить меньше 1 товара" << std::endl;
					goto pvpoint;
				}
				if (__count > 0)
				{
					device[1]->buy(__count);
					break;
				}
			}
			if (_do == 0)
			{
				break;
			}
			break;
		case 0:
			return 0;
		}
	}
}
