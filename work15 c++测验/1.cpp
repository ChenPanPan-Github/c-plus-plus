#include <iostream>
using namespace std;
class test{
  private:
   int x,y;
  public:
   static int num;
   static int Getnum(int x)
   {
     x+=4;
     return x;
   }
};
int test::num=10;
int main(){
   test a;
   cout<<a.Getnum()<<endl;  
   return 0;
}

#include <iostream>
using namespace std;
class test{
  private:
   int x,y;
  public:
	  test(int newx,int newy)
	  {
	   x=newx;
	   y=newy;
	  }
   static int num;
   static int Getnum(int x)
   {
     x+=4;
     return x;
   }
};
int test::num=10;
int main(){
   test a(1,2);
   cout<<a.Getnum(1)<<endl;  
   return 0;
}