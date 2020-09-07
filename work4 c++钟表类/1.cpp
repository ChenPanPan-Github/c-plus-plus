#include<iostream>
using namespace std;
class clock{
public:
	clock(int newh=0,int newm=0,int news=0);
	void showtime;
{
	cout<<hour<<":"<<minute<<":"<<second<<endl;
}
	void settime(int newh,int newm,int news);
private:
	int hour;
	int minute;
	int second;
};
clock::clock(int newh,int newm,int news)
{
	hour=newh;
	minute=newm;
	second=news;
}
void clock::settime(int newh,int newm,int news)
{
	hour=newh;
	minute=newm;
	second=news;	
}
int main()
{
	clock.myclock;
	myclock.showtime();
		return 0;
}
