#include <iostream>
#include <string>
using namespace std;

class vehicle
{
 public:
  string brand = "Ford";
  void honk()
  {
    cout<<"Beeep, beeep!\n";
  }
};
class car: public vehicle
{
 public:
  string model = "Mustang";
};
int main ()
{
  car myCar;
  myCar.honk();
  cout<<myCar.brand+", "+myCar.model<<endl;
  return 0;
}
    
