#include <iostream>
#include <set>
using namespace std;
int main()
{
  set <string> cars;

  cars.insert("MDZ");
  cars.insert("ASD");
  cars.insert("ASD");
  cars.insert("Bolvo");
  cars.erase("ASD");
  
  for (string car:cars)
    {
      cout << car << "\n";
    }
}
