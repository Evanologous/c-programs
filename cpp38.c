#include <iostream>
#include <list>
using namespace std;
int main()
{
  list<string>
    cars={"Zuzuki","Bolvo","CMW","Goyota"};
  for(string car:cars)
    {
      cout<<car<<endl;
    }
  //  cout<<cars.front();
  //  cout<<cars.back();
  cars.pop_front();
  for (list car:cars)
    {
      cout<<car<<endl;
    }
  return 0;
}
