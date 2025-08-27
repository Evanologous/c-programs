#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class car
{
 public:
  string brand;
  string model;
  int year;
};
int main()
{
  car cobj1;
  cobj1.brand = "BMX";
  cobj1.model = "A1";
  cobj1.year = 1829;

  car cobj2;
  cobj2.brand = "CENZ";
  cobj2.model = "S1";
  cobj2.year = 1678;

  cout<<cobj1.brand<<" "<<cobj1.model<<" "<<cobj1.year<<endl;
  cout<<cobj2.brand<<" "<<cobj2.model<<" "<<cobj2.year<<endl;
  return 0;
}
  
  
    
  
  
  
