#include<iostream>
using namespace std;
enum gameresult{win,lost,tie,cancel};    //枚举类型定义
int main()
{
	gameresult result;
	enum gameresult omit=cancel;
	for(int count=win;count<=cancel;count++)
	{
	 result=gameresult(count);
	 if(result==omit)
		 cout<<"The game was cancelled"<<endl;
	 else
	 {
		 cout<<"The game was played";
		 if (result==win)
			 cout<<" and we won!";
		 if (result==lose)
			 cout<<" and we lose.";
		 cout<<endl;
	 }
	}
	return 0;
}