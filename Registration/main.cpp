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
int a = 0, c = 0; // счётчик для подсчёта входа в аккаунты, да, говно, можно как то по другому сделать
struct user
{
	string userp, userl; // данные вводящие пользователь
};
struct admin
{
	string userlo;
	string userpn, userln;
};
struct userbd
{
	string userpbd, userlbd; // типа бд, да
	string adminpbd = "admin228", adminlbd = "abobatelecom"; // тут можете изменить админ пароль и логин
};
void ausp()
{
	struct userbd a;
	struct admin av;
	cout << "Введите старый логин пользователя: ";
	cin >> av.userlo;
	if (av.userlo == a.userlbd)
	{
		cout << "Введите новый логин пользователя: ";
		cin >> a.userlbd;
		cout << "Введите новый пароль пользователя: ";
		cin >> a.userpbd;
	};
};
void adminmenu1()
{
	int vibora;
	cout << "Выберите что хотите: 1 - сменить пароль и логин пользователя, 2 - сменить админ пароль и логин.";
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
		cout << "Вы неправильно ввели данные! Попробуйте ещё раз!" << endl;
		break;
	};
	};
};
void adminmenugeneral()
{
	int vibor;
TRYAS:
	cout << "Выберите что хотите: 1 - Программы," << endl << ", 2 - админ меню.";
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
		cout << "Вы неправильно ввели данные! Попробуйте ещё раз!" << endl;
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
	cout << "Введите свой логин: ";
	cin >> vvodfr.userl;
	cout << "Введите свой пароль: ";
	cin >> vvodfr.userp;
	if (vvodfr.userl == vvodl.userlbd && vvodfr.userp == vvodl.userpbd)
	{
		cout << "Поздравляю! Вы вошли в меню!" << endl;
		a = a + 1;
		menugeneral();
	}
	if (vvodfr.userl == vvodl.adminlbd && vvodfr.userp == vvodl.adminpbd)
	{
		cout << "Поздравляю! Вы вошли в админ-меню!" << endl;
		a = a + 1;
		c = c + 1;
		adminmenugeneral();
	}
	else
	{
		cout << "Вы неправильно ввели данные! Попробуйте ещё раз!" << endl;
		goto TRYA;
	}
};
void registration()
{
	struct userbd vvodr;
	cout << "Введите свой новый логин: ";
	cin >> vvodr.userlbd;
	cout << "Введите свой новый пароль: ";
	cin >> vvodr.userpbd;
	vhod();
};
void zapusk()
{
	int s;
Try:
	cout << "Выберите что хотите: " << endl << "1 - авторизация," << endl << "2 - регистрация," << endl << "3 - перерегистрация," << endl << "4 - вход, если вы до этого входили." << endl;
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
			cout << "Вы ещё не входили!" << endl;
			goto Try;
		}
		break;
	};
	default:
	{
		cout << "Вы выбрали несуществующий пункт! Введите заново!" << endl;
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