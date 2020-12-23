#include <iostream>
#include <string>
#include <array>
#include <cstring>
#include <cctype>
#include <fstream>
#include <iomanip>

using namespace std;

void p1()
{
	char ch = 0;
	while ((ch = cin.get()) != '@')
	{
		if (isdigit(ch))
		{
			continue;
		}
		else if (islower(ch))
		{
			cout << (char)toupper(ch);
		}
		else if (isupper(ch))
		{
			cout << (char)tolower(ch);
		}
	}

	cout << "Done!" << endl;
}


void p2()

{
	double arr[12];
	double sum = 0,avg = 0;
	int enter = 0,lar = 0;
	while (enter < 10 && (cin >> arr[enter]))
	{
		sum += arr[enter];
		enter++;
	}
	avg = sum / enter;
	for (int i = 0; i < enter;i++)
	{
		if (arr[i] > avg)
		{
			lar++;
		}
	}
	cout << "The average value is " << avg << ", and there are " << lar << " double value large than average value!" << endl;
}

void p3()
{
	char ch = 0;
	cout << "Please enter one of the following choices: " << endl;
	cout << "c) carnivore" << "p) pianist" << endl;
	cout << "t) tree" << "g) game" << endl;
	bool exit = false;
	while (cin >> ch && !exit)
	{
		switch (ch)
		{
		case 'c':
			cout << "safsacsac." << endl;
			exit = true;
			break;

		case 'p':
			cout << "safcsadc." << endl;
			exit = true;
			break;

		case 't':
			cout << "A maple is a tree." << endl;
			exit = true;
			break;

		case 'g':
			cout << "sdfsc." << endl;
			exit = true;
			break;

		default:
			cout << "Please enter a c, p, t or g: ";
			break;
		}
	}
}
void display_by_name(const struct bop *bopArray, unsigned int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << bopArray[i].fullname << endl;
	}
}
void display_by_title(const struct bop *bopArray, unsigned int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << bopArray[i].title << endl;
	}
}
void display_by_bopname(const struct bop *bopArray, unsigned int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << bopArray[i].bopname << endl;
	}
}
void display_by_preference(const struct bop *bopArray, unsigned int size)
{
	for (size_t i = 0; i < size; i++)
	{
		if (bopArray[i].preference == 0)
		{
			cout << bopArray[i].fullname << endl;
		}
		else if (bopArray[i].preference == 1)
		{
			cout << bopArray[i].title << endl;
		}
		else if (bopArray[i].preference == 2)
		{
			cout << bopArray[i].bopname << endl;
		}
	}
}
const int strsize = 50;
struct bop
{
	char fullname[strsize];     // real name
	char title[strsize];        // job title
	char bopname[strsize];      // secret BOP name
	int preference;             // 0 = fullname, 1 = title, 2 = bopname
};
void p4()
{
	const struct bop bopArray[5] = {
		{ "Wimp Macho", "YYY", "Y----", 0 },
		{ "XXXXXXXX", "2XXXX", "3XXXXX", 1 },
		{ "AAAAAAAA", "2AAAA", "3AAAAA", 2 },
		{ "BBBBBBBB", "2BBBB", "3BBBBB", 0 },
		{ "CCCCCCCC", "4CCCC", "3CCCCC", 1 }
	};
	char choice = 0;
	cout << "Benevolent Order of Proframers Report" << endl;
	cout << left << setw(30) << "a. display by name" << "b. display by title" << endl;
	cout << left << setw(30) << "c. display by bopname" << "d. display by preference" << endl;
	cout << left << setw(30) << "q. quit" << endl;
	cout << "Enter your choice:";

	while (cin >> choice)
	{
		if (choice == 'q')
		{
			break;
		}
		switch (choice)
		{
		case 'a':
			display_by_name(bopArray, 5);
			break;

		case 'b':
			display_by_title(bopArray, 5);
			break;

		case 'c':
			display_by_bopname(bopArray, 5);
			break;

		case 'd':
			display_by_preference(bopArray, 5);
			break;

		default:
			break;
		}
		cout << "Next choice:";
	}
	cout << "Bye!" << endl;
	return;
}

void p5()
{
	const double RATE1 = 0.1;
	const double RATE2 = 0.15;
	const double RATE3 = 0.2;
	double income = 0.0;
	double tax = 0.0;

	cout << "Please enter your income:";
	while ((cin >> income) && (income > 0))
	{
		if (income <= 5000)
		{
			tax = 0.0;
		}
		else if (5000 < income && income <= 15000)
		{
			tax = (income - 5000) * RATE1;
		}
		else if (15000 < income && income <= 35000)
		{
			tax = (15000 - 5000) * RATE1 + (income - 15000) * RATE2;
		}
		else
		{
			tax = (15000 - 5000) * RATE1 + (35000 - 15000) * RATE2 + (income - 35000) * RATE3;
		}

		cout << "income = " << income << ", tax = " << tax << endl;
	}

	return;
}

void p6()
{
	struct pat_info
	{
		string name;
		double amount;
	};
	unsigned int contributors = 0;
	unsigned int tmp = 0;

	cout << "Enter the number of contributors:";
	cin >> contributors;
	cin.get();

	struct pat_info *pContributors = new struct pat_info[contributors];

	for (size_t i = 0; i < contributors; i++)
	{
		cout << "Enter the name of " << i + 1 << " contributor: ";
		getline(cin, pContributors[i].name);

		cout << "Enter the amount of donation: ";
		cin >> pContributors[i].amount;
		cin.get();
	}

	cout << "Grand Pators:" << endl;
	for (size_t i = 0; i < contributors; i++)
	{
		if (pContributors[i].amount > 10000)
		{
			cout << "Contributor name: " << pContributors[i].name << endl;
			cout << "Contrubutor amount: " << pContributors[i].amount << endl;
			tmp++;
		}
	}
	if (tmp == 0)
	{
		cout << "none" << endl;
	}

	tmp = 0;
	cout << "Pators:" << endl;
	for (size_t i = 0; i < contributors; i++)
	{
		if (pContributors[i].amount < 10000)
		{
			cout << "Contributor name: " << pContributors[i].name << endl;
			cout << "Contrubutor amount: " << pContributors[i].amount << endl;
		}
	}
	if (tmp == 0)
	{
		cout << "none" << endl;
	}
	delete pContributors;
	return;
}
}
void p7()
{
	unsigned int vowels = 0;
	unsigned int consonants = 0;
	unsigned int others = 0;
	string input;

	cout << "Enter words (q to quit): " << endl;

	while ((cin >> input))
	{
		if (input.length() == 1 && input[0] == 'q')
		{
			break;
		}

		if (isalpha(input[0]))
		{
			if (input[0] == 'a' || input[0] == 'e' || input[0] == 'i' || input[0] == 'o' || input[0] == 'u')
			{
				vowels++;
			}
			else
				consonants++;
		}
		else
			others++;
	}

	cout << vowels << " words beginning with vowels" << endl;
	cout << consonants << " words beginning with consonants" << endl;
	cout << others << " otners" << endl;

	return;
}
void p8()
{
	string FileName;
	ifstream inFile;
	unsigned int num = 0;
	char ch = 0;

	cout << "Enter the file name:";
	getline(cin, FileName);

	inFile.open(FileName.c_str());

	while ((ch = inFile.get()) != EOF)
	{
		num++;
	}

	cout << "There are " << num << " characters in " << FileName << " file." << endl;
}
void p9()
{
	unsigned int contributors = 0;
	unsigned int tmp = 0;
	string FileName;
	ifstream inFile;


	cout << "Enter the file name:";
	getline(cin, FileName);
	inFile.open(FileName.c_str());
	inFile >> contributors;
	inFile.get();

	struct pat_info *pContributors = new struct pat_info[contributors];

	for (size_t i = 0; i < contributors; i++)
	{
		//      cout << "Enter the name of " << i + 1 << " contributor: ";
		getline(inFile, pContributors[i].name);

		//      cout << "Enter the amount of donation: ";
		inFile >> pContributors[i].amount;
		inFile.get();
	}

	cout << "Grand Pators:" << endl;
	for (size_t i = 0; i < contributors; i++)
	{
		if (pContributors[i].amount > 10000)
		{
			cout << "Contributor name: " << pContributors[i].name << endl;
			cout << "Contrubutor amount: " << pContributors[i].amount << endl;
			tmp++;
		}
	}
	if (tmp == 0)
	{
		cout << "none" << endl;
	}

	tmp = 0;
	cout << "Pators:" << endl;
	for (size_t i = 0; i < contributors; i++)
	{
		if (pContributors[i].amount < 10000)
		{
			cout << "Contributor name: " << pContributors[i].name << endl;
			cout << "Contrubutor amount: " << pContributors[i].amount << endl;
			tmp++;
		}
	}
	if (tmp == 0)
	{
		cout << "none" << endl;
	}

	return;
}
int main()
{
	p9();
	system("pause");
	return 0;
}

