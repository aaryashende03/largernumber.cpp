#include<iostream>
using namespace std;
class Compare
{
	private:
	         int num1 , num2 , num3;
			 
	public:

 void Greater(int a , int b , int c)
{
	int num1 = a;
	int num2 = b;
	int num3 = c;
	
	if(a>=b && a>=c)
	{
		cout<<"a is the greater number "<<endl;
	}
	else if(b>=c && b>=a)
	{
		cout<<"b is the greater number "<<endl;
	}
	else
	{
		cout<<"c is the greater number "<<endl;
	}
	
}

};

int main()
{
	Compare obj;
	int a , b , c;
	cout<<"enter the 1 st number ="<<endl;
	cin>>a;
	cout<<"enter the 2 nd number ="<<endl;
	cin>>b;
	cout<<"enter the 3 rd number ="<<endl;
	cin>>c;
	obj.Greater( a ,  b ,  c);
	return 0;
}
      		