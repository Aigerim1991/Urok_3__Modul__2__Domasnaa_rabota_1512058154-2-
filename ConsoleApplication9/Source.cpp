#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>
using namespace std;
void main()
{
	cout.setf(ios::boolalpha);
	setlocale(LC_ALL, "RUS");
dog:
	int N;
	cout << "������� ����� �������:" << "\n";
	cin >> N;
	if (N == 1)
	{
		int a;
		cout << "������ ������:" << "\n";
		cin >> a;
		if (a % 2 == 0)
		{
			cout << "������ ����� ������:" << "\n";
		}
		else
		{
			cout << "������ ����� �� ������:" << "\n";

		}
	}
	else if (N == 2)
	{
		int A;
		cout << "������ ������:" << "\n";
		cin >> A;
		if (A % 2 == 0 || A % 3 == 0)
		{
			cout << "������ ����� ������:" << "\n";
		}
		else
		{
			cout << "������ �����  �� ������:" << "\n";
		}
	}
	else if (N == 3)
	{
		int a, b;
		cout << "������ ������:" << "\n";
		cin >> a;
		cout << "������ ������:" << "\n";
		cin >> b;
		if (a % 1 == 0 && b % 1 == 0)
		{
			cout << "������ ����� ��������:" << "\n";
		}
		else
		{
			cout << "������ ����� ������:" << "\n";
		}

	}
	else if (N == 4)
	{
		bool r;
		int x = 0, y = 0, z = 1;

		r = (x <y&&y < z);//r ����� true
		cout << "r=" << r << endl;
		r = (x < y&&y > z);//r ����� true
		cout << "r=" << r << endl;
		r = (x>y);//r ����� true
		cout << "r=" << r << endl;




	}
	else if (N == 5)
	{
		int tgx;
		cout << "tgx:" << "\n";
		cin >> tgx;
		int p = 3.14;
		int k;
		cout << "k:" << "\n";
		cin >> k;
		if (tgx != 0 && k >= 0)
			tgx = p / 2 + p*k;
		cout << "������ � ����� �������" << "\t" << tgx << "\n";





	}
	else if (N == 6)
	{
		bool d;
		int a = 1, b = 0, c = 1;

		d = (a<a || a>b || b<c);//r ����� false
		cout << "d=" << d << endl;
		d = (a>a || a>b || b<c);//r ����� true
		cout << "d=" << d << endl;
		d = (a<c || c>b || b<c);//r ����� true
		cout << "d=" << d << endl;
		d = (a<b || b>c || c<a);//r ����� true
		cout << "d=" << d << endl;
	}
	else if (N == 7)
	{
		int a;
		cout << "������ ������:" << "\n";
		cin >> a;
		int x1 = a / 100;
		float x2 = a % 10;
		float x3 = a / 10;
		if (1000 > a&&a < 999);
		int f = x1*x2*x3;
		cout << "����� � �������� ����������� ������" << "\t" << f << "\n";
	}
	else if (N == 8)
	{
		bool t;
		int a, b, c;
		cout << "������ ������:" << "\n";
		cin >> a;
		cout << "������ ������:" << "\n";
		cin >> b;
		cout << "������ ������:" << "\n";
		cin >> c;
		t = (a<45 || 45>b || c < 45);//t ����� true
		cout << "t:" << "" << t << "\n";
		t = (a>45 || 45>b || c > 45);//t ����� false
		cout << "t:" << "" << t << endl;


	}
	else if (N == 9)
	{
		bool f;
		int a;
		cout << "������ ������:" << "\n";
		cin >> a;
		int x = a % 10;
		f = ((a % 10) % 3 && a == 0);//f ����� true
		cout << "f:" << "" << f << "\n";
		f = ((a % 10) / 3 && a == 1);//f  ����� false
		cout << "f:" << "" << f << "\n";
	}
	else if (N == 10)
	{
		int a = 0;
		srand(time(NULL));
		a = 1 + rand() % 137;
		cout << a << endl;
		a = 1 + rand() % 51;
		cout << a << endl;
		a = 1 + rand() % 123;
		cout << a << endl;
		a = 1 + rand() % 55;
	}
	goto dog;
}