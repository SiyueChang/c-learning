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

