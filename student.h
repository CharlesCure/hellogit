#include <iostream>
#include <string>

using namespace std;

class student {
private: 
	int age;
	string idNum="";

public:
	student()
	{
	age=0;
	idNum="";
	}

	void setidNum(string a)
	{
	idNum=a;
	}

	string getidNum()
	{
	return idNum;
	}

	void setage(string b)
	{
	age=b;
	}

	getage()
	{
	return age;
	}
