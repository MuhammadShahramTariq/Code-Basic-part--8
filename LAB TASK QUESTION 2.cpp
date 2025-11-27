#include<iostream>
using namespace std;
	
int natural(int x);
int main()
{
	int number,summain;
	cout<<"Enter the Integer value :";
	cin>>number;
	summain=natural(number);
	cout<<"Sum of all natural "<<number<<"  number is :"<<summain;
	
}
int natural(int x)
{
	int naturalsum;
	int sum;
for(int i=1;i<=x;i++)
{
	sum+=i;
}
naturalsum=sum;
	return naturalsum;
}