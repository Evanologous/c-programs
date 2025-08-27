#include <iostream>
#include <iomanip>
using namespace std;

class MyClass
{
 public:
  void myMethod()
  {
    cout<<"Bye"<<endl;
  }
};
int main()
{
  MyClass myObj;
  myObj.myMethod();
  return 0;
}
  
