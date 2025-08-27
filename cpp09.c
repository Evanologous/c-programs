#include <iostream>
using namespace std;
class employee
{
 protected:
  int salary;
};
class programmer: public employee
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
};
int main()
{
  programmer myObj;
  myObj.setSalary(50000);
  myObj.bonus = 15000;
  cout<<"Salary: "<<myObj.getSalary()<<endl;
  cout<<"Bonus: "<<myObj.bonus<<endl;
  return 0;
}

  
