#include <iostream>
#include <deque>
using namespace std;
int main()
{
  deque <string> cars;

  cars.push_front("MDZ");
  cars.push_back("ASD");
  cars.push_front("Bolvo");
  
  for (int i = 0; i < cars.size(); i++)
    {
      cout << cars [i] << "\n";
      //    cars.get(i);
    }
}
