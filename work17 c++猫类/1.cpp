#include<iostream>
#include<cstring>
using namespace std;


class Cat{
public:
 Cat(int newage,char newname[],char newkind[])
 {
   age=newage;
   strcpy(name,newname);
   strcpy(kind,newkind);
   numOfCats++;
 }
 Cat(Cat &p)
 {
   age=p.age;
   strcpy(name,p.name);
   strcpy(kind,p.kind);
   numOfCats++;
 }
 ~Cat()
 {
	numOfCats--;
   cout<<"析构函数被调用"<<endl;
 }
 void showdown()
 {
 cout<<"名字 ："<<name<<endl;
 cout<<"年龄 ："<<age<<" 岁"<<endl;
 cout<<"品种 ："<<kind<<endl;
 }
 void getnumOfCats()
 {
	 cout<<"Cat的个体数目:"<<numOfCats<<endl;
 }
private:
 int age;
 char name[10];
 char kind[30];
 static int numOfCats;
}
int Cat::numOfCats=0;
int main( )
{
	Cat a(3,"汤姆","英国短毛猫");
    a.showdown();
    a.getnumOfCats;
    return 0;
}