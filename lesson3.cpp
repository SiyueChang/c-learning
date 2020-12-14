#include<iostream>
using std::cin;
using std::cout;
using std::endl;

const int Inches2Feet = 12;
void p1()
{
	int feet = 0 , inches = 0 , f = 0;
    cout<<"输入英尺:____\b\b\b\b";
    cin>>inches;
    feet = inches/Inches2Feet;
    f = inches%Inches2Feet;
	cout<<"英尺 = "<<inches<<" 英寸 = "<<feet<<" 余下 = "<<f<<endl;
}

const float inch2m = 0.0254;
const float pound2kg = 2.2;
void p2()
{
	
	int inches = 0,feet = 0,pounds = 0;
	float BMI = 0.0 , m = 0.0 , kg = 0.0;
	cout<<"输入英尺:____\b\b\b\b";
    cin>>inches;
    cout<<"输入英寸:____\b\b\b\b";
    cin>>feet;
    cout<<"输入磅:____\b\b\b\b";
    cin>>pounds;
    m = float(inches + feet * 12) * inch2m;
    kg = float(pounds)/pound2kg;
    BMI = kg / (m * m);
    cout<<"BMI为"<<BMI<<endl; 
}

const float deg2min = 60.0;
const float min2sec = 60.0;
void p3()
{
	cout<<"enter a latitude in degrees,minutes,and seconds:"<<endl;
	int iDegrees = 0 ,iMinutes = 0, iSeconds = 0;
	float fDegrees = 0.0;
	cout<<"first,enter the degrees:";
	cin>>iDegrees;
	cout<<"next,enter the minutes:";
	cin>>iMinutes;
	cout<<"finally,enter the seconds:";
	cin>>iSeconds;
	fDegrees = iDegrees + (float(iMinutes)/deg2min) + (float(iSeconds)/deg2min/min2sec);
	cout<<iDegrees<<"degrees,"<<iMinutes<<"minutes,"<<iSeconds<<"seconds = "<<fDegrees<<"degress"<<endl;
}

const int day2hour = 24;
const int hour2min = 60;
const int min2second = 60;
void p4()
{
	cout<<"enter the number of seconds:";
	long long sec = 0;
	long day = 0;
	int hours = 0 ,minutes = 0,seconds = 0;
	cin>>sec;
	day = sec/(day2hour*hour2min*min2second);
	hours = sec%(day2hour*hour2min*min2second)/(hour2min*min2second);
	minutes = (sec%(hour2min*min2second))/min2second;
	seconds = sec%min2second;
	cout<<sec<<" seconds = "<<day<<" days, "<<hours<<" hours, "<<minutes<<" minutes, "<<seconds<<" seconds"<<endl; 
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
	long long worldp = 0,usp = 0;
	long double rate = 0.0;
	cout<<"enter the world's population: ";
	cin>>worldp;
	cout<<"enter the population of the us: ";
	cin>>usp;
	rate = usp;
	rate = rate/worldp*100;
	cout<<"rate is :"<<rate;
}

//这个题目看不懂 
void p7()
{
	float o = 0.0,a = 0.0;
	cout<<"输入每100公里消耗的汽油量（升）：";
	cin>>o;
	a = o/19*12.41; 
	cout<<"可以换算成每加仑"<<a<<"英里"<<endl; 
}
int main()
{
	p7();
	return 0;
}

