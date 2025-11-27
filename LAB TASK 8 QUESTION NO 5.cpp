#include <iostream>
using namespace std;
bool Leap(int year);

int main()
 {
    int year;
    cout<<"Enter the year: ";
    cin>>year;

 
    bool leapyear=Leap(year);
    

    if (leapyear) 
	{
        cout<<year<<" Is a leap year."<<endl;
    } else 
	{
        cout<<year<<" Is not a leap year."<<endl;
    
	}

    return 0;
}

bool Leap(int year)
{

    
  if (year % 400 == 0) {
        return true;
    } 
	else 
	{
        return false;
    }
}