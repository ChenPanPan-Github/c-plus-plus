#include<iostream>
using namespace std;
class Car;
class Boat
{
private:double weight;
public:Boat(double newweight=0):weight(newweight){}
    Boat(Boat&p):weight(p.weight ){}
    ~Boat(){cout<<"析构函数已被调用"<<endl;}
    friend double gettotalweight(Boat&p1,Car&p2);
};
class Car
{
private:double weight;
public:Car(double newweight=0):weight(newweight){}
    Car(Car&p):weight(p.weight ){}
    ~Car(){cout<<"析构函数已被调用"<<endl;}
    friend double gettotalweight(Boat&p1,Car&p2);
};

double gettotalweight(Boat&p1,Car&p2)
{
 double a=p1.weight+p2.weight ;
 return a;
}
int main()
{
 Boat a(1);
 Car b(2);
 cout<<"总重量为:"<<gettotalweight(a,b)<<endl;
 return 0;