#include <iostream>
#include <thread>
#include <chrono>
#include "functions.h"
#include <string>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;
int a = 0, c = 0; // ������� ��� �������� ����� � ��������, ��, �����, ����� ��� �� �� ������� �������
struct user
{
	string userp, userl; // ������ �������� ������������
};
struct admin
{
	string userlo;
	string userpn, userln;
};
struct userbd
{
	string userpbd, userlbd; // ���� ��, ��
	string adminpbd = "admin228", adminlbd = "abobatelecom"; // ��� ������ �������� ����� ������ � �����
};
void ausp()
{
	struct userbd a;
	struct admin av;
	cout << "������� ������ ����� ������������: ";
	cin >> av.userlo;
	if (av.userlo == a.userlbd)
	{
		cout << "������� ����� ����� ������������: ";
		cin >> a.userlbd;
		cout << "������� ����� ������ ������������: ";
		cin >> a.userpbd;
	};
};
void adminmenu1()
{
	int vibora;
	cout << "�������� ��� ������: 1 - ������� ������ � ����� ������������, 2 - ������� ����� ������ � �����.";
	cin >> vibora;
	switch (vibora)
	{
	case 1:
	{
		ausp();
		break;
	};
	case 2:
	{
		
	};
	default:
	{
		cout << "�� ����������� ����� ������! ���������� ��� ���!" << endl;
		break;
	};
	};
};
void adminmenugeneral()
{
	int vibor;
TRYAS:
	cout << "�������� ��� ������: 1 - ���������," << endl << ", 2 - ����� ����.";
	cin >> vibor;
	switch (vibor)
	{
	case 1:
	{
		glav();
		break;
	};
	case 2:
	{
		adminmenu1();
		break;
	};
	default:
	{
		cout << "�� ����������� ����� ������! ���������� ��� ���!" << endl;
		goto TRYAS;
		break;
	};
	};
};
void menu1()
{

};
void menugeneral()
{

};
void vhod()
{
	struct user vvodfr;
	struct userbd vvodl;
TRYA:
	cout << "������� ���� �����: ";
	cin >> vvodfr.userl;
	cout << "������� ���� ������: ";
	cin >> vvodfr.userp;
	if (vvodfr.userl == vvodl.userlbd && vvodfr.userp == vvodl.userpbd)
	{
		cout << "����������! �� ����� � ����!" << endl;
		a = a + 1;
		menugeneral();
	}
	if (vvodfr.userl == vvodl.adminlbd && vvodfr.userp == vvodl.adminpbd)
	{
		cout << "����������! �� ����� � �����-����!" << endl;
		a = a + 1;
		c = c + 1;
		adminmenugeneral();
	}
	else
	{
		cout << "�� ����������� ����� ������! ���������� ��� ���!" << endl;
		goto TRYA;
	}
};
void registration()
{
	struct userbd vvodr;
	cout << "������� ���� ����� �����: ";
	cin >> vvodr.userlbd;
	cout << "������� ���� ����� ������: ";
	cin >> vvodr.userpbd;
	vhod();
};
void zapusk()
{
	int s;
Try:
	cout << "�������� ��� ������: " << endl << "1 - �����������," << endl << "2 - �����������," << endl << "3 - ���������������," << endl << "4 - ����, ���� �� �� ����� �������." << endl;
	cin >> s;
	switch (s)
	{
	case 1:
	{
		vhod();
		break;
	};
	case 2:
	{
		registration();
		break;
	};
	case 3:
	{
		registration();
		break;
	}
	case 4:
	{
		if (a >= 1)
		{
			if (c >= 1)
			{
				adminmenugeneral();
			}
			if (c <= 0)
			{
				menugeneral();
			}
		}
		else
		{
			cout << "�� ��� �� �������!" << endl;
			goto Try;
		}
		break;
	};
	default:
	{
		cout << "�� ������� �������������� �����! ������� ������!" << endl;
		goto Try;
		break;
	};
	};
};
int main()
{
	setlocale(LC_ALL, "RUS");
	std::this_thread::sleep_for(100ms);
	for (int i; i == i; i)
	{
		zapusk();
	}
	system("pause");
	return 0;
};