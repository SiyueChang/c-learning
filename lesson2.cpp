#include<iostream>
using namespace std;

void p1()
{
    cout<<"zhangsiyue"<<endl;
	cout<<"china,jilin,animation college"<<endl;
}

void p2()
{
	float longm;
	cout<<"输入long的长度:"<<endl; 
    cin>>longm;
    cout<<"long的长度为"<<longm*220<<"码"<<endl; 
}

void p3v1()
{
	cout<<"three blind mice"<<endl;
}
void p3v2()
{
	cout<<"see how they run"<<endl;
}
void p3()
{
	p3v1();
	p3v1();
	p3v2();
	p3v2(); 
}

void p4()
{
	int age = 0;
	cout<<"enter your age: ";
	cin>>age;
	cout<<endl;
	cout<<"month is "<<age*12<<endl;
}

void p5()
{
	float dagrees;
	cout<<"please enter a celsius value: ";
	cin>>dagrees;
	cout<<dagrees<<" degrees celsius is "<<dagrees*1.8+32.0<<" degrees fahrenheit."<<endl;
}

void p6()
{
	double units;
	cout<<"enter the number of light years:";
	cin>>units;
	cout<<units<<"light years = "<<units*63240<<" astronomical units"<<endl;
}

void p7()
{
	int hours,minutes;
	cout<<"enter the number of hours:";
	cin>>hours;
	cout<<"enter the number of minutes:";
	cin>>minutes;
	cout<<"time: "<<hours<<":"<<minutes<<endl;
}
int main()
{
	p7();
	return 0;
}

