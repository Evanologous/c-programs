#include <iostream>
using namespace std;
int main()
{
  try
    {
      int age;
      cout<<"Enter your age: ";
      cin>>age;
      if (age >= 18)
	{
	  cout<<"Access granted - you are old enough."<<endl;
	}
      else
	{
	  throw 505;
	}
    }
  catch (int myNum)
    {
      cout<<"Access denied - you must be at least 18 years old"<<endl;
      cout<<"Error Code: "<<myNum
    }
  return 0;
}
