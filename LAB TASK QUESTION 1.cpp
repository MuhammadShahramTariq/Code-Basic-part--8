#include<iostream>
using namespace std;
	
int maxtwo(int x,int y);
int main()
{
	int a,b,max;
	cout<<"Enter the value :";
	cin>>a;
	cout<<"Enter the value: ";
	cin>>b;
	max=maxtwo(a,b);
	cout<<"largest values is :"<<max;
	
}
int maxtwo(int x,int y)
{

	int maximum;
	if(x>y)
	{
		maximum=x;
		
	}
	else
	{
		maximum=y;
		return maximum;
	}
	return maximum;
}