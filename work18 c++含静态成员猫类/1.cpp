#include<iostream>
using namespace std;
class Cat{
public:
 Cat(int a=0)
 {
  numOfCats=a;
  numOfCats++;
 }
 Cat(const Cat&p)
 {
  numOfCats=p.numOfCats;
  numOfCats++;
 }
 ~Cat()
 {
  numOfCats--;
 }
 static void getNumOfCats()
 {
  cout<<"猫的数量为"<<numOfCats<<endl;
 }
private:
  static int numOfCats;

};
int  Cat::numOfCats=0;
int main()
{
 Cat x;
 x.getNumOfCats();
 return 0;
}