#include<iostream>
#include<cstring>
#include"1.h"
using namespace std;

void Cat::show()
{
	cout<<"name£º"<<name<<endl;
	cout<<"num £º"<<num<<" Ëê"<<endl;
}
Cat::Cat(int newnum,char newname[])
	{
	 num=newnum;
	 strcpy(name,newname);
	}