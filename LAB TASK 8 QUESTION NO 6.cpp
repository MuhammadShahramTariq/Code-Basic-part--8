#include<iostream>
#include<string>
using namespace std;
	struct student{
string name;
int age;
float totalmarks;};

int main()
{
	 float Total=0;
	float average;
	student studentdata[2];
	for(int i=0;i<2;i++)
	{
		cout<<"Enter Name Of Student "<<i+1<<" : ";
		cin>>studentdata[i].name;
		cout<<"Enter Age of Student "<<i+1<<" : ";
		cin>>studentdata[i].age;
		cout<<"Enter Total Marks Of Student "<<i+1<<" : ";
		cin>>studentdata[i].totalmarks;
	}
	cout<<endl;
	cout<<"Students Data : "<<endl;
for(int i=0;i<2;i++)
{
	cout<<"Name of Student : "<<i+1<<" : "<<studentdata[i].name<<endl;
	cout<<"Age Of Student  :"<<i+1<<" : "<<studentdata[i].age<<endl;
	cout<<"Total marks of Student :"<<i+1<<" : "<<studentdata[i].totalmarks<<endl;
}
cout<<endl;
for(int i=0;i<2;i++)
{
	Total+=studentdata[i].totalmarks;
}
cout<<"Total Marks of both students :"<<Total<<endl;
average=Total/2;
cout<<"Average Of Student Marks Is :"<<average;
return 0;
}