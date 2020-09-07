#include<iostream>
#include<string>
using namespace std;

class dog{
public:
	dog(int newage,char newname[],char newkind[])
	{
	  age=newage;
	  strcpy(name,newname);
	  strcpy(kind,newkind);
	}
	dog(dog &p)
	{
	  age=p.age;
	  strcpy(name,p.name);
	  strcpy(kind,p.kind);
	}
	~dog()
	{
	  cout<<"析构函数被调用"<<endl;
	}
	void showdown()
	{
		cout<<"名字 ："<<name<<endl;
		cout<<"年龄 ："<<age<<" 岁"<<endl;
		cout<<"品种 ："<<kind<<endl;
	}

private:
	int age;
	char name[10];
	char kind[30];
};

int main( )
{
	dog mydog(3,"团团","中华田园犬");
	dog your(mydog);
	mydog.showdown();
	your.showdown();
	return 0;
}
