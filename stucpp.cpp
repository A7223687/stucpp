#include "StuCard.h"
#include<iostream>
#include<iomanip>
StuCard::StuCard()
{
	name = "i";
	sex = 0;
	scoreAry[0] = 0;
	scoreAry[1] = 0;
	scoreAry[2] = 0;
}
StuCard::StuCard(string n,bool s,double* sc)
{
	setName(n);
	setSex(s);
	setScore(3, sc);
}

void StuCard::setName(string n)
{
	name = n;
}
void StuCard::setSex(bool s)
{
	sex = s;
}
void StuCard::setScore(int n, double* s)
{
	for (int i = 0; i < n; i++)
	{
		scoreAry[i]= *(s+i); 
	}
}
string StuCard::getName()
{
	return name;
}
bool StuCard::getSex()
{
	return sex;
}
double StuCard::getScore(int n)
{
	
		return scoreAry[n];
	
}
double StuCard::average()
{
	double s = 0;
	for (int i = 0; i < 3; i++)
	{
		s += scoreAry[i];
	}
	return s / 3.0;
}
void StuCard::printCard()
{
	cout << fixed << setprecision(2);
	cout << name << " " << sex << " " << scoreAry[0] 
		<< " " << scoreAry[1] << " " << scoreAry[2] << endl;
}
void StuCard::readFromFile(fstream& inout)
{
	inout >> name >> sex>>scoreAry[0]>> scoreAry[1]>> scoreAry[2];
	
}
void StuCard::writeToFile(fstream& inout)
{

	inout << name << " " << sex << " " << getScore(0)
		<< " " << getScore(1) << " " << getScore(2) << endl;;
	

}
