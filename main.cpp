#include "Shop.h"
#include "PC.h"
#include "TV.h"
#include "Phone.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	Device* device[5];
	device[0] = new TV(100, 157099, "TTTBV20DDDD", "Apple", 32000); // Количество, цена, IMEI, компания, память в мб
	device[1] = new PC(300 ,45999, "4394240FSDIIII2329", "ASUS", true, true,  500000, "X64", true); // Количество, цена, IMEI, Компания, мышь, клавиатура, память в мб, процессор, обновляемый
	device[2] = new TV(500, 67099, "TTTBV20310DDDD", "Samsung", 8196); // Количество, цена, IMEI, компания, память в мб
	device[3] = new Phone(100, 36300, "439929DSD920000", "Apple", 32000, "M2", true, true); // Количество, цена, IMEI, компания, память в мб, процессор, тачпад, обновляемый
	device[4] = new Phone(150, 59300, "43992D920000", "Apple", 172000, "M5", true, true); // Количество, цена, IMEI, компания, память в мб, процессор, тачпад, обновляемый

	bool opened = true;
	while (opened)
	{
		cout << "Добро пожаловать в магазин электроники. " << endl;
		cout << "Выберите нужный раздел: 1 - Телевизоры, 2 - телефоны, 3 - компьютеры. 0 - Выход." << endl;
		short point = 0;
		short type = 0;
		short _do = 0;
		short __count = 0;
		short this_;
		cin >> point;
		switch (point)
		{
		case 1:
			cout << "Вы выбрали раздел ТВ. 1 - Apple, 2 - Samsung; 0 - возврат на уровень выше." << endl;
			cin >> type;
			switch (type)
			{

			case 1:
				cout << "Раздел Apple" << endl;
				cout << "Вам доступен 1 товар:" << endl;
				device[0]->showCharacteristics();
				cout << endl << "Что вы хотите сделать с данным товаром? Вам доступно 2 опции. 1 - купить 0 - вернуться на раздел выше" << endl;
				cin >> _do;
				if (_do == 1)
				{
					//Маркер dpoint
					dpoint:
					cout << "Сколько вы хотите купить? " << endl;
					cin >> __count;
					if (__count <= 0)
					{
						cout << "Вы не можете купить меньше 1 товара" << endl;
						goto dpoint;
					}
					if (__count > 0)
					{
						device[0]->buy(__count);
						break;
					}
				}

			case 2:
				cout << "Раздел Samsung" << endl;
				cout << "Вам доступен 1 товар:" << endl;
				device[2]->showCharacteristics();
				cout << endl << "Что вы хотите сделать с данным товаром? Вам доступно 2 опции. 1 - купить 0 - вернуться на раздел выше" << endl;
				cin >> _do;
				if (_do == 1)
				{
					//Маркер cpoint
				cpoint:
					cout << "Сколько вы хотите купить? " << endl;
					cin >> __count;
					if (__count <= 0)
					{
						cout << "Вы не можете купить меньше 1 товара" << endl;
						goto cpoint;
					}
					if (__count > 0)
					{
						device[2]->buy(__count);
						break;
					}
				}
			case 0:
				break;
			default:
				cout << "Введите 0, 1 или 2." << endl;
				break;

			}


			break;
		case 2:
			cout << "Вы выбрали раздел телефоны. 1 - Apple, 0 - возврат на уровень выше." << endl;
			cin >> type;
			switch (type)
			{

			case 1:
				cout << "Раздел Apple" << endl;
				cout << "Вам доступно 2 товара:" << endl;
				device[3]->showCharacteristics();
				cout << endl << endl;
				device[4]->showCharacteristics();
				cout << endl << "Чтобы выбрать первый товар, введите 1, чтобы выбрать второй - введите 2:" << endl;

				cin >> this_;
				if (this_ == 1)
				{
					device[3]->showCharacteristics();
					cout << endl << "Что вы хотите сделать с данным товаром? Вам доступно 2 опции. 1 - купить 0 - вернуться на раздел выше" << endl;
					cin >> _do;
					if (_do == 1)
					{
						//Маркер rpoint
					rpoint:
						cout << "Сколько вы хотите купить? " << endl;
						cin >> __count;
						if (__count <= 0)
						{
							cout << "Вы не можете купить меньше 1 товара" << endl;
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
					cout << endl << "Что вы хотите сделать с данным товаром? Вам доступно 2 опции. 1 - купить 0 - вернуться на раздел выше" << endl;
					cin >> _do;
					if (_do == 1)
					{
						//Маркер tpoint
					tpoint:
						cout << "Сколько вы хотите купить? " << endl;
						cin >> __count;
						if (__count <= 0)
						{
							cout << "Вы не можете купить меньше 1 товара" << endl;
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
			case 0:
				break;
			default:
				cout << "Введите 0 или 1." << endl;
				break;
			}
			break;
		case 3:
			cout << "Вы выбрали раздел компьютеры." << endl;
			cout << "Вам доступен 1 компьютер: " << endl;
			device[1]->showCharacteristics();
			cout << endl << "Что вы хотите сделать с данным товаром? Вам доступно 2 опции. 1 - купить 0 - вернуться на раздел выше" << endl;
			cin >> _do;
			if (_do == 1)
			{
				//Маркер pvpoint
			pvpoint:
				cout << "Сколько вы хотите купить? " << endl;
				cin >> __count;
				if (__count <= 0)
				{
					cout << "Вы не можете купить меньше 1 товара" << endl;
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
			break;
		}
	}
	
}