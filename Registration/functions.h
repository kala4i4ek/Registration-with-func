#pragma once
using namespace std;
void calc()
{
	char d;
	double a, b;
TRYAAA:
	cout << "������� ������ �����: ";
	cin >> a;
	cout << "������� ������ �����: ";
	cin >> b;
	cout << "������� ��������( +, -, *, /): ";
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
		cout << "�� ����������� ����� ������!" << endl;
		goto TRYAAA;
	};
	};
}
void ssss()
{
	double a, b, c, d;
	int e;
	cout << "������� ���-�� �������: ";
	cin >> a;
	cout << "������� ���-�� ����� �� ��������: ";
	cin >> b;
	cout << "������� ���-�� �������� � ������: ";
	cin >> c;
	cout << "������� ���������� ������ ������� � �����: ";
	cin >> d;
TryAgain:
	cout << "������� � ����� ������� ������ ������� ���������(1 - B,2 - KB, 3 - MB, 4 - GB): ";
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
		cout << "��� ������ = " << a * b * c * d / 8 << " ����.";
		break;
	};
	case 2:
	{
		cout << "��� ������ = " << (a * b * c * d) / 8 / 1000 << " ��������.";
		break;
	};
	case 3:
	{
		cout << "��� ������ = " << (a * b * c * d) / 8 / 1000 / 1000 << " ��������.";
		break;
	};
	case 4:
	{
		cout << "��� ������ = " << (a * b * c * d) / 8 / 1024 / 1024 / 1024 << " ��������.";
		break;
	};
	default:
	{
		cout << endl << "�� ����������� ����� ��� ������� ������!" << endl;
		goto TryAgain;
		break;
	};
	}
}
void podshet()
{
	string b;
	cout << "������� �����: ";
	cin >> b;
	int a = b.length();
	int c;
	cout << endl << "������� ��� ������ �������: ";
	cin >> c;
	cout << "��� ������ =  " << a * c;
}
void kolvosimv()
{
	int a, b, c;
	cout << "������� ���-�� �������: ";
	cin >> a;
	cout << "������� ���-�� ����� �� ��������: ";
	cin >> b;
	cout << "������� ���-�� �������� � ������: ";
	cin >> c;
	cout << "���������� �������� = " << a * b * c;
}

void glav()
{
	int e;
Try:
	cout << "������� �������, ������� ������ ������������(1 - KS, 2 - PS, 3 - PSB, 4 - CALC): ";
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
		cout << "��������� �����������! ��������� ��� ���!" << endl;
		goto Try;
		break;
	};
	};
}