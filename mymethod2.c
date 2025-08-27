#include <iostream>
#include <iomanip>
using namespace std;

class MyClass
{
 public:
  void mymethod();
};
void MyClass::mymethod()
{
  cout<<"ASLK";
}
int main()
{
  MyClass myObj;
  myObj.mymethod();
  return 0;
}
