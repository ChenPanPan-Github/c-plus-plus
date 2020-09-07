#include<iostream>
#include<iomanip>
using namespace std;
 int main()
 {
	const double pi(3.14159);
		int radius(0);
		cout<<"The initial radius is:"<<radius<<'\n';
		cout<<"pi is :"<<pi<<'\n';
		cout<<"Please enter a different radius!\n";
		cin>>radius;
		cout<<"Now the radius is changed to :"<<radius<<'\n';
		cout<<"pi is still:"<<pi<<'\n';
		cout<<setw(5)<<setprecision(3)<<3.14159;
		return 0;
 }