#include<iostream.h>
#include<conio.h>

//using namespace std;
class func123
{
	public:
	void fun(int x)
	{
		cout<<"value of x is:"<<x<<endl;
	}

	void fun(double x)
	{
		cout<<"value of x is:"<<x<<endl;
	}
	void fun(int x,int y)
	{
		cout<<"value of x and y is:"<<x<<y<<endl;
	}
};
int main()
{
 int x=0;

  clrscr();
  func123  ok;
  ok.fun(7);
  ok.fun(9.76);
  ok.fun(13,7675);
  return 0;
  getch();
}
