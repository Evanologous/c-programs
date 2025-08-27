#include <iostream>
using namespace std;

class employee
{
 private:
  int salary;
 public:
  employee(int s)
    {
      salary = s;
    }
  friend void displaySalary(employee emp);
};
void displaySalary(employee emp)
{
  cout<<"Salary: "<<emp.salary<<endl;
}
int main()
{
  employee myEmp(50000);
  displaySalary(myEmp);
  return 0;
}
  
