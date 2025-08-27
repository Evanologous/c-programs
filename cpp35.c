#include <iostream>
using namespace std;
int main()
{
  //  int name;
  string name;
  do
    {
      cout<<"Enter your name: ";
      getline(cin,name);
    }
  while(name.empty());
  cout<<"Hello, "<<name<<endl;
}
