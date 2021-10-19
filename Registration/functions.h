#pragma once
using namespace std;
void calc()
{
	char d;
	double a, b;
TRYAAA:
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "Введите действие( +, -, *, /): ";
	cin >> d;
	switch (d)
	{
	case '+':
	{
		cout << a << " + " << b << " = " << a + b << endl;
		break;
	};
	case '-':
	{
		cout << a << " - " << b << " = " << a - b << endl;
		break;
	};
	case '*':
	{
		cout << a << " * " << b << " = " << a * b << endl;
		break;
	};
	case '/':
	{
		cout << a << " / " << b << " = " << a / b << endl;
		break;
	};
	default:
	{
		cout << "Вы неправильно ввели данные!" << endl;
		goto TRYAAA;
	};
	};
}
void ssss()
{
	double a, b, c, d;
	int e;
	cout << "Введите кол-во страниц: ";
	cin >> a;
	cout << "Введите кол-во строк на странице: ";
	cin >> b;
	cout << "Введите кол-во символов в строке: ";
	cin >> c;
	cout << "Введите исчисление одного символа в битах: ";
	cin >> d;
TryAgain:
	cout << "Введите в какой единице хотите увидить результат(1 - B,2 - KB, 3 - MB, 4 - GB): ";
	cin >> e;
	if (a < 1)
	{
		a = a + 1;
	}
	if (b < 1)
	{
		b = b + 1;
	}
	if (c < 1)
	{
		c = c + 1;
	}
	switch (e)
	{
	case 1:
	{
		cout << "Вес текста = " << a * b * c * d / 8 << " байт.";
		break;
	};
	case 2:
	{
		cout << "Вес текста = " << (a * b * c * d) / 8 / 1000 << " килобайт.";
		break;
	};
	case 3:
	{
		cout << "Вес текста = " << (a * b * c * d) / 8 / 1000 / 1000 << " мегабайт.";
		break;
	};
	case 4:
	{
		cout << "Вес текста = " << (a * b * c * d) / 8 / 1024 / 1024 / 1024 << " гигабайт.";
		break;
	};
	default:
	{
		cout << endl << "Вы неправильно ввели тип размера данных!" << endl;
		goto TryAgain;
		break;
	};
	}
}
void podshet()
{
	string b;
	cout << "Введите текст: ";
	cin >> b;
	int a = b.length();
	int c;
	cout << endl << "Введите вес одного символа: ";
	cin >> c;
	cout << "Вес текста =  " << a * c;
}
void kolvosimv()
{
	int a, b, c;
	cout << "Введите кол-во страниц: ";
	cin >> a;
	cout << "Введите кол-во строк на странице: ";
	cin >> b;
	cout << "Введите кол-во символов в строке: ";
	cin >> c;
	cout << "Количество символов = " << a * b * c;
}

void glav()
{
	int e;
Try:
	cout << "Введите функцию, которую хотите использовать(1 - KS, 2 - PS, 3 - PSB, 4 - CALC): ";
	cin >> e;
	switch (e)
	{
	case 1:
	{
		kolvosimv();
		break;
	};
	case 2:
	{
		podshet();
		break;
	};
	case 3:
	{
		ssss();
		break;
	};
	case 4:
	{
		calc();
		break;
	};
	default:
	{
		cout << "Программа завершилась! Повторите ещё раз!" << endl;
		goto Try;
		break;
	};
	};
}