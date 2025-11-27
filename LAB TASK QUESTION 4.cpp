#include<iostream>
using namespace std;
 int sumArray(int size,int arr[]);
 int main()
 {
 	int size,sum;
 	cout<<"Enter size of Array :";
 	cin>>size;
 	cout<<"enter value in array :";
 	int valuearray[size];
 	valuearray[size];
 	for(int i=0;i<size;i++)
 	{
 	cin>>valuearray[i];	
	 }
	 cout<<endl;
	 cout<<"Value are :";
	 for(int i=0;i<size;i++)
	 {
	 	cout<<valuearray[i]<<" ";
	 }
	 cout<<endl;
 int sumArr;
	sumArr=sumArray(size,valuearray);
	cout<<"Sum OF ARRAY Values is :"<<sumArr;
 return 0;	
 }
 int sumArray(int size,int arr[])

{
	int sum=0;
	
	 for(int j=0;j<size;j++)
	 {
	 	sum+=arr[j];
	 }
	 	return sum;
}