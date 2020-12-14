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

void p6()        //https://www.zhihu.com/question/49164544 关于->
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
//array<T,N> 模板定义了一种相当于标准数组的容器类型。它是一个有 N 个 T 类型元素的固定序列。除了需要指定元素的类型和个数之外，它和常规数组没有太大的差别。显然，不能增加或删除元素。
//模板实例的元素被内部存储在标准数组中。和标准数组相比，array 容器的额外开销很小，但提供了两个优点：如果使用 at()，当用一个非法的索引访问数组元素时，能够被检测到，因为容器知道它有多少个元素，这也就意味着数组容器可以作为参数传给函数，而不再需要单独去指定数组元素的个数。
int main()
{
	p9();
	system("pause");
	return 0;
}

