#include <iostream>
#include <string>
#include <array>
#include <cstring>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;
using std::array;

void p1()
{
	int a = 0, b = 0,i = 0,sum = 0;
	cin >> a;
	cin >> b;
	if (a>b)
	{
		i = a;
		a = b;
		b = i;
	} 
	else 
    {
		i = a;
	}
	while (i <= b)
	{
		sum = sum + i;
		i++;
	}
	cout << sum << endl;
}

void p2()
{
	const int ArSize = 100;
	array<long double, ArSize + 1> factorials;
	factorials[0] = factorials[1] = 1.0;
	for (int i = 2; i <ArSize;i++)
	{
		factorials[i] = i*factorials[i - 1];
	}
	for (int i = 0;i <ArSize;i++)
	{
		cout << i << "! = " << factorials[i] << endl;
	}
}

void p3()
{
	int sum = 0, in = 0;
	while (true)
	{
		cin >> in;
		sum = sum + in;
		if (in == 0)
		{
			break;
		}
	}
	cout << sum;
}

void p4()
{
	double daphne = 100.0,cleo = 100.0;
	int year = 0;
	for (year = 0;daphne>=cleo ; year++)
	{
		daphne = daphne + 10;
		cleo = cleo * 1.05;
	}
// 	while (daphne>=cleo)
// 	{
// 		daphne = daphne + 10;
// 		cleo = cleo * 1.05;
// 		year++;
// 	}
	cout << "year:" << year << " daphne:" << daphne << " cleo:" << cleo << endl;
}

void p5()
{
	char *years[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	int sell[12];
	int sum= 0;
	for(int i = 0; i < 12;i++ )
	{
		cin >> sell[i];
		sum += sell[i];
	}
	cout << "sum = " << sum << endl;
	for (int i = 0;i<12;i++)
	{
		cout << years[i] << ":" << sell[i] << endl;
	}
}

void p6()
{
	char *years[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	int sell[3][12] = { 0 };
	int sum[3] = { 0 };
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 12; i++)
		{
			cin >> sell[j][i];
			sum[j] += sell[j][i];
		}
		cout << "sum = " << sum[j] << endl;
	}
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << j << " " << years[i] << ":" << sell[j][i] << endl;
		}
	}
}
void p7()
{
	int num = 0;
	cout << "How many cars do you wish to catalog? ";
	cin >> num;
	struct car
	{
		string comname;
		int madyear;
	};
	struct car *pcar = new struct car[num];
	for (int i = 0;i < num; i++)
	{
		cout << "Car #" << i + 1 << ":" << endl;
		cout << "Please enter the make: ";
		cin >> pcar[i].comname;
		//getline(cin, pcar[i].comname);
		cout << "Please enter the year make: ";
		cin >> pcar[i].madyear;
		cin.get();
	}
	cout << "Here is your collection:" << endl;
	for (int i = 0; i < num; i++)
	{
		cout << pcar[i].madyear << " " << pcar[i].comname << endl;
	}
	delete pcar;
}
void p8()
{
	cout << "Enter words (to stop, type the word done):" << endl;
	int a = 0;
	char sd[128];
	while (cin>>sd)
	{
		if (strcmp(sd,"done"))
		{
			a++;
		} 
		else
		{
			break;
		}
	}
	cout << "You entered a total of " << a << " words." << endl;
}
void p9()
{
	cout << "Enter words (to stop, type the word done):" << endl;
	int a = 0;
	string sd;
	while (cin>>sd)
	{
		if (sd!="done")
		{
			a++;
		} 
		else
		{
			break;
		}
	}
	cout << "You entered a total of " << a << " words." << endl;
}
void p10()
{
	cout << "Enter number of rows: " << endl;
	int a = 0;
	cin >> a;
	for (int i = 0;i < a;i++)
	{
		for (int j = a - i - 1;j > 0;j--)
		{
			cout << ".";
		}
		for (int k = 0; k < i + 1; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
int main()
{
	p10();
	system("pause");
	return 0;
}

