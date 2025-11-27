#include<iostream>
#include<string>
using namespace std;
	struct employee{
int ID;
string name;
float salary;};

int main()
{
	 float max=0;

	employee data[3];
	for(int i=0;i<3;i++)
	{
		cout<<"Enter ID of Employee  "<<i+1<<" : ";
		cin>>data[i].ID;
		cout<<"Enter Name Of employee "<<i+1<<" : ";
		cin>>data[i].name;
		cout<<"Enter  The Salary of Employee "<<i+1<<" : ";
		cin>>data[i].salary;
	}
	cout<<endl;
	cout<<"EMPLOYEE Data : "<<endl;
for(int i=0;i<3;i++)
{
	cout<<"ID Of Employee  :"<<i+1<<" : "<<data[i].ID<<endl;
	cout<<"Name of Employee : "<<i+1<<" : "<<data[i].name<<endl;
	cout<<"Salary of Employee :"<<i+1<<" : "<<data[i].salary<<endl;
}
cout<<endl;
for(int i=0;i<3;i++)
{
if(data[i].salary>max)
max=data[i].salary;
else
cout<<" nothing";
}
cout<<"Highest Salary : "<<max;

return 0;
}