#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class MyClass
{
 public:
  int myNum;
  string myString;
};
int main()
{
  MyClass myObj;

  myObj.myNum = 15;
  myObj.myString = "bye";

  cout<<myObj.myNum<<endl;
  cout<<myObj.myString<<"\n";
  return 0;
}
