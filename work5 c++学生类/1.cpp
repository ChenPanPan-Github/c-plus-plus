#include "iostream"

using namespace std;

class student

{

public:

 student(int num = 0)

 {

 number = num;

 name = m;

 }

 student( student &a)

 {

 number = a.getnum();

 name = a.getname();

 }



 ~student()

 {

 cout << "析构函数被调用" << endl;

 }



 void show()

 {

 cout << "学生信息：" << endl

 << "学号：" << number << endl

 << "名字：" << name<<endl

 }



 string getname()

 {

 return name;

         ]



 int getnum()

 {

 return number;

 }

private:

 int number;

 string name;



};







int main()

{

 {

 student stu1();

 student stu2();

 stu1.show();

 stu2.show();

 }

 return 0;

}

