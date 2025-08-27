#include <iostream>
using namespace std;
int main()
{
  string name;
  int age;
  cout<<"Enter your name: ";
  cin>>name;
  cout<<"Enter your age: ";
  cin>>age;
  age = age+1;
  cout<<"Hi "<<name<<" you will turn "<<age<<" next year"<<endl;
}
