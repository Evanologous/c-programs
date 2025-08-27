#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Car
{
 public:
  string brand;
  string model;
  
  Car()
    {
      brand = "unknown";
      model = "unknown";
    }
  Car(string b, string m)
    {
      brand = b;
      model = m;
    }
};
int main()
{
  Car car1;
  Car car2("BMW","D3");
  Car car3("Dord","Hustang");

  //  cout<<cobj1.brand<<","<<cobj1.model<<","<<cobj1.year<<endl;
  //  cout<<cobj2.brand<<","<<cobj2.model<<","<<cobj2.year<<endl;
  cout<<"Car1: "<<car1.brand<<","<<car1.model<<"\n";
  cout<<"Car2: "<<car2.brand<<","<<car2.model<<"\n";
  cout<<"Car3: "<<car3.brand<<","<<car3.model<<"\n";
  return 0;
  
}

