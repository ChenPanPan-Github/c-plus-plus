#include<iostream>
#include<cstring>
using namespace std;

class Cat{
private:
	char name[10];
	int num;
public:
	Cat(int newnum,char newname[]);
	void show();
};