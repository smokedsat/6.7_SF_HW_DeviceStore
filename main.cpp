#include "Shop.h"
#include "PC.h"
#include "TV.h"
#include "Phone.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	Device* device[5];
	device[0] = new TV(100, 157099, "TTTBV20DDDD", "Apple", 32000); // ����������, ����, IMEI, ��������, ������ � ��
	device[1] = new PC(300 ,45999, "4394240FSDIIII2329", "ASUS", true, true,  500000, "X64", true); // ����������, ����, IMEI, ��������, ����, ����������, ������ � ��, ���������, �����������
	device[2] = new TV(500, 67099, "TTTBV20310DDDD", "Samsung", 8196); // ����������, ����, IMEI, ��������, ������ � ��
	device[3] = new Phone(100, 36300, "439929DSD920000", "Apple", 32000, "M2", true, true); // ����������, ����, IMEI, ��������, ������ � ��, ���������, ������, �����������
	device[4] = new Phone(150, 59300, "43992D920000", "Apple", 172000, "M5", true, true); // ����������, ����, IMEI, ��������, ������ � ��, ���������, ������, �����������

	bool opened = true;
	while (opened)
	{
		cout << "����� ���������� � ������� �����������. " << endl;
		cout << "�������� ������ ������: 1 - ����������, 2 - ��������, 3 - ����������. 0 - �����." << endl;
		short point = 0;
		short type = 0;
		short _do = 0;
		short __count = 0;
		short this_;
		cin >> point;
		switch (point)
		{
		case 1:
			cout << "�� ������� ������ ��. 1 - Apple, 2 - Samsung; 0 - ������� �� ������� ����." << endl;
			cin >> type;
			switch (type)
			{

			case 1:
				cout << "������ Apple" << endl;
				cout << "��� �������� 1 �����:" << endl;
				device[0]->showCharacteristics();
				cout << endl << "��� �� ������ ������� � ������ �������? ��� �������� 2 �����. 1 - ������ 0 - ��������� �� ������ ����" << endl;
				cin >> _do;
				if (_do == 1)
				{
					//������ dpoint
					dpoint:
					cout << "������� �� ������ ������? " << endl;
					cin >> __count;
					if (__count <= 0)
					{
						cout << "�� �� ������ ������ ������ 1 ������" << endl;
						goto dpoint;
					}
					if (__count > 0)
					{
						device[0]->buy(__count);
						break;
					}
				}

			case 2:
				cout << "������ Samsung" << endl;
				cout << "��� �������� 1 �����:" << endl;
				device[2]->showCharacteristics();
				cout << endl << "��� �� ������ ������� � ������ �������? ��� �������� 2 �����. 1 - ������ 0 - ��������� �� ������ ����" << endl;
				cin >> _do;
				if (_do == 1)
				{
					//������ cpoint
				cpoint:
					cout << "������� �� ������ ������? " << endl;
					cin >> __count;
					if (__count <= 0)
					{
						cout << "�� �� ������ ������ ������ 1 ������" << endl;
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
				cout << "������� 0, 1 ��� 2." << endl;
				break;

			}


			break;
		case 2:
			cout << "�� ������� ������ ��������. 1 - Apple, 0 - ������� �� ������� ����." << endl;
			cin >> type;
			switch (type)
			{

			case 1:
				cout << "������ Apple" << endl;
				cout << "��� �������� 2 ������:" << endl;
				device[3]->showCharacteristics();
				cout << endl << endl;
				device[4]->showCharacteristics();
				cout << endl << "����� ������� ������ �����, ������� 1, ����� ������� ������ - ������� 2:" << endl;

				cin >> this_;
				if (this_ == 1)
				{
					device[3]->showCharacteristics();
					cout << endl << "��� �� ������ ������� � ������ �������? ��� �������� 2 �����. 1 - ������ 0 - ��������� �� ������ ����" << endl;
					cin >> _do;
					if (_do == 1)
					{
						//������ rpoint
					rpoint:
						cout << "������� �� ������ ������? " << endl;
						cin >> __count;
						if (__count <= 0)
						{
							cout << "�� �� ������ ������ ������ 1 ������" << endl;
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
					cout << endl << "��� �� ������ ������� � ������ �������? ��� �������� 2 �����. 1 - ������ 0 - ��������� �� ������ ����" << endl;
					cin >> _do;
					if (_do == 1)
					{
						//������ tpoint
					tpoint:
						cout << "������� �� ������ ������? " << endl;
						cin >> __count;
						if (__count <= 0)
						{
							cout << "�� �� ������ ������ ������ 1 ������" << endl;
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
				cout << "������� 0 ��� 1." << endl;
				break;
			}
			break;
		case 3:
			cout << "�� ������� ������ ����������." << endl;
			cout << "��� �������� 1 ���������: " << endl;
			device[1]->showCharacteristics();
			cout << endl << "��� �� ������ ������� � ������ �������? ��� �������� 2 �����. 1 - ������ 0 - ��������� �� ������ ����" << endl;
			cin >> _do;
			if (_do == 1)
			{
				//������ pvpoint
			pvpoint:
				cout << "������� �� ������ ������? " << endl;
				cin >> __count;
				if (__count <= 0)
				{
					cout << "�� �� ������ ������ ������ 1 ������" << endl;
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