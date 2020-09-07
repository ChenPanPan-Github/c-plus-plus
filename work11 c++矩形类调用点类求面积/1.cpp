#include<iostream>
#include<cmath>
using namespace std;

class Point{
public:
      Point (double newx,double newy)
	  {
	   x=newx;
	   y=newy;
	   cout<<"点类构造函数被调用！"<<endl;
	  }
	  Point (Point &p)
	  {
	   x=p.x;
	   y=p.y;
	   cout<<"点类复制构造函数被调用！"<<endl;
	  }
	  ~Point( )
	  {
	   cout<<"点类析构函数被调用！"<<endl;
	  }
      void show( )
      {
	   cout<<"("<<x<<","<<y<<")"<<endl;
	  }
	  double getX( )
	  {
	   return x;
	  }
	  double getY( )
	  {
	   return y;
	  }
private:
      double x,y;
};

class Rectangle{
public:
      Rectangle(Point newp1,Point newp2):p1(newp1),p2(newp2)
	  {
	   double px=newp1.getX( )-newp2.getX( );
	   double py=newp1.getY( )-newp2.getY( );
	   area=px*py;
	   cout<<"平面类构造函数被调用！"<<endl;
	  }
	  Rectangle(Rectangle &q):p1(q.p1),p2(q.p2)
	  {
	   area=q.area;
	   cout<<"平面类复制函数被调用！"<<endl;
	  }
	  ~Rectangle( )
	  {
	   cout<<"平面类析构函数被调用！"<<endl;
	  }
	  void show( )
	  {
	   cout<<"所求矩形面积为："<<area<<endl;
	  }
private:
	  Point p1,p2;
	  double area;
};

int main( )
{
    Point my(0,0),your(3,3);
	Rectangle myarea(my,your);
	myarea.show( );
	return 0;
}
点类构造函数被调用！
点类构造函数被调用！
点类复制构造函数被调用！
点类复制构造函数被调用！
点类复制构造函数被调用！
点类复制构造函数被调用！
平面类构造函数被调用！
点类析构函数被调用！
点类析构函数被调用！
所求矩形面积为：9
平面类析构函数被调用！
点类析构函数被调用！
点类析构函数被调用！
点类析构函数被调用！
点类析构函数被调用！
Press any key to continue