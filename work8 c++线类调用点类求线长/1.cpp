#include<iostream>
#include<cmath>
using namespace std;

class Point{
public:
	Point(double newx,double newy)
	{
		x=newx;
		y=newy;
		cout<<"点的构造函数被调用"<<endl;
	}
	Point(Point &p)
	{
		x=p.x;
		y=p.y;
		cout<<"点的复制函数被调用"<<endl;
	}
	~Point()
	{
		cout<<"点的析构函数被调用"<<endl;
	}
	void show()
	{
		cout<<"("<<x<<","<<y<<")"<<endl;
	}
	double getX()
	{return x;}
	double getY()
	{return y;}
private:
	double x,y;
};

class Line{
public:
	Line(Point newp1,Point newp2):p1(newp1),p2(newp2)
	{
		double px=newp1.getX()-newp2.getX();
		double py=newp1.getY()-newp2.getY();
		len=sqrt(px*px+py*py);
		cout<<"线段构造函数被调用"<<endl;
	}
	Line(Line &q):p1(q.p1),p2(q.p2)
	{
		len=q.len;cout<<"线段复制构造函数被调用"<<endl;
	}
	~Line()
	{
		cout<<"线段析构函数别调用"<<endl;
	}
	void show()
	{
		cout<<"线段长度是："<<len<<endl;
	}
private:
	Point p1,p2;
	double len;
};

int main()
{
	Point my(1,2),your(3,4);
	Line myline(my,your);
	myline.show();
	return 0;
}

点(1,2)的构造函数被调用了 my
点(3,4)的构造函数被调用了 your
点(3,4)的复制构造函数被调用了your->newp2
点(1,2)的复制构造函数被调用了my->newp1
点(1,2)的复制构造函数被调用了newp1->p1
点(3,4)的复制构造函数被调用了newp2->p2
线段的构造函数被调用了
点(1,2)的析构函数被调用了 newp1
点(3,4)的析构函数被调用了 newp2
线段的长度是：2.82843
线段的析构函数被调用了
点(3,4)的析构函数被调用了 p2
点(1,2)的析构函数被调用了 p1
点(3,4)的析构函数被调用了 your
点(1,2)的析构函数被调用了 my

