#include <iostream>
using namespace std;
int main()
{
  int number;
  bool flag=true;
  do
    {
      cout<<"Enter a number between 1 and 5: ";
      cin>>number;
  
      if (number >= 1 && number <= 5)
	{
	  cout<<"You've entered: "<<number<<endl;
	  flag=false;
	}
      else
	{
	  cout<<"Try again: "<<endl;
	}
    } while (flag==true);
}


