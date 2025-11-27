#include<iostream>
using namespace std;
	double area(float radius);
int main()
{
	float radius,circleArea;
	
	cout<<"Enter The Radius :";
	cin>>radius;
	circleArea=area(radius);
	cout<<"Formula of circle "<<" :  "
	 "Area Of Circle=pi*radius*radius"<<endl;
	cout<<"Area of circle  :"<<circleArea;
	
}
double area(float radius)
{
	double areaofcircle;
float pi=3.14;
	areaofcircle=pi*radius*radius;
	return areaofcircle;

}