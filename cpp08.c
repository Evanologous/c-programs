#include <iostream>
using namespace std;
class MyClass
{
 protected:
  int salary;
  
 public:
  void myBaseFunction()
  {
    cout<<"Some content in parent class"<<endl;
  }
};
class MyChild: public MyClass
{
 public:
  int bonus;
  void setSalary(int s)
  {
    salary = s;
  }
  int getSalary()
  {
    return salary;
  }
  void  myChildFuntion()
  {
    cout<<"Content in child class"<<endl;
  }
};
class MyGrandChild: public MyChild
{
 public:
  void  myGrandChildFuntion()
  {
    cout<<"Content in Grand child class"<<endl;
  }
};
int main()
{
  MyGrandChild myObj;
  myObj.myBaseFunction();
  myObj.myChildFuntion();
  myObj.myGrandChildFuntion();
  MyChild myObj2;
  myObj2.setSalary(50000);
  myObj2.bonus = 15000;
  cout<<"Salary: "<<myObj2.getSalary()<<endl;
  cout<<"Bonus: "<<myObj2.bonus<<endl;
  //  cout<<myObj2.salary<<endl;
  return 0;
}
