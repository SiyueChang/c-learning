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
	char firstname[127], lastname[127];
	char letter;
	int age;
	cout << "What is your first name? ";
	cin.getline(firstname, 127);
	cout << "What is your last name? ";
	cin.getline(lastname, 127);
	cout << "What letter grade do you deserve? ";
	cin >> letter;
	cout << "What is your age? ";
	cin >> age;
	cout << "Name: " << lastname << ", " << firstname << endl;
	cout << "Grade: " << char(letter + 1) << endl;
	cout << "Age: " << age << endl;
}

void p2()
{
	string name;
	string dessert;
	cout << "Enter your name:\n";
	getline(cin, name);
	cout << "Enter your favorite dessert:\n";
	getline(cin, dessert);
	cout << "I have some delicious " << dessert<< " for you, " << name <<endl;
}

void p3()
{
	char lastname[127], firstname[127];
	cout << "Enter your first name:";
	cin.getline(firstname, 127);
	cout << "Enter your last name:";
	cin.getline(lastname, 127);
	cout << "Here's your information is a single string: " << lastname << ", " << firstname << endl;
}

void p4()
{
	string lastname, firstname;
	cout << "Enter your first name:";
	getline(cin, lastname);
	cout << "Enter your last name:";
	getline(cin, firstname);
	cout << "Here's your information is a single string: " << lastname << ", " << firstname << endl;
}

void p5()
{
	struct CandyBar
	{
		string name;
		float weight;
		int kll;
	};
	CandyBar snack
	{
		"Mocha Munch",
		2.3,
		3.1
	};
	cout << "the information of CandyBar, Name: " << snack.name << ", Weight: " << snack.weight << ", " << " Calories: " << snack.kll << "." << endl;
}

void p6()        //https://www.zhihu.com/question/49164544 ����->
{
	struct CandyBar
	{
		string name;
		float weight;
		int kll;
	};
	CandyBar snack[3] = {
		{ "Mocha Munch", 5.2, 3 },
		{ "ma d", 2.35, 3 },
		{ "mod yes", 2.06, 10 }
	};
	for (int i = 0;i < 3; i++)
	{
		cout << "the information of CandyBar, Name: " << snack[i].name << ", Weight: " << snack[i].weight << ", " << " Calories: " << snack[i].kll << "." << endl;
	}
}

void p7() 
{
	struct WilliamWingated
	{
		string name;
		float size;
		float weight;
	}pisa;
	cout << "name:";
	cin >> pisa.name;
	cout << "size:";
	cin >> pisa.size;
	cout << "weight:";
	cin >> pisa.weight;
	cout << "The company name of pizza is " << pisa.name << ", the size of the pizza is " << pisa.size << ", the weight of the pizza is " << pisa.weight << endl;
}
void p8()
{
	struct WilliamWingated
	{
		string name;
		float size;
		float weight;
	};
	WilliamWingated *ppisa = new WilliamWingated;
	cout << "name:";
	cin >> ppisa->name;
	cout << "size:";
	cin >> ppisa->size;
	cout << "weight:";
	cin >> ppisa->weight;
	cout << "The company name of pizza is " << ppisa->name << ", the size of the pizza is " << ppisa->size << ", the weight of the pizza is " << ppisa->weight << endl;
	delete ppisa;
}
void p9()
{	
	struct CandyBar
	{
		string name;
		float weight;
		int kll;
	};
	CandyBar *psnack = new CandyBar[3];
	psnack[0].name = "Mocha Munch";
	psnack[1].name = "ma d";
	psnack[2].name = "mod yes";
	psnack[0].weight = 5.2;
	psnack[1].weight = 2.35;
	psnack[2].weight = 2.06;
	psnack[0].kll = 3;
	psnack[1].kll = 3;
	psnack[2].kll = 10;
	for (int i = 0; i < 3; i++)
	{
		cout << "the information of CandyBar, Name: " << psnack[i].name << ", Weight: " << psnack[i].weight << ", " << " Calories: " << psnack[i].kll << "." << endl;
	}
	delete[] psnack;
}
void p10()
{
	array<double, 3> timing;
	double advtime = 0.0;
	cout << "Enter three results time of running 40 meters: ";
	cin >> timing[0];
	cin >> timing[1];
	cin >> timing[2];
	advtime = (timing[0] + timing[1] + timing[2]) / 3;
	cout << "Average result: " << advtime;
}
//array<T,N> ģ�嶨����һ���൱�ڱ�׼������������͡�����һ���� N �� T ����Ԫ�صĹ̶����С�������Ҫָ��Ԫ�ص����ͺ͸���֮�⣬���ͳ�������û��̫��Ĳ����Ȼ���������ӻ�ɾ��Ԫ�ء�
//ģ��ʵ����Ԫ�ر��ڲ��洢�ڱ�׼�����С��ͱ�׼������ȣ�array �����Ķ��⿪����С�����ṩ�������ŵ㣺���ʹ�� at()������һ���Ƿ���������������Ԫ��ʱ���ܹ�����⵽����Ϊ����֪�����ж��ٸ�Ԫ�أ���Ҳ����ζ����������������Ϊ����������������������Ҫ����ȥָ������Ԫ�صĸ�����
int main()
{
	p9();
	system("pause");
	return 0;
}

