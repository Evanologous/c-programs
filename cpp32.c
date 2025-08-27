#include <iostream>
using namespace std;
int main()
{
  int number;
  cout<<"Enter a number: ";
  while(!(cin>>num))
      {
	cout<<"Invalid input. Try again: ";
	cin.clear();
	cin.ignore(1000,'\n');
      }
  cout<<"You entered: "<<num
    return 0;
  }
