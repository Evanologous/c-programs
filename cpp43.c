#include <iostream>
#include <queue>
using namespace std;
int main()
{
  queue <string> cars;

  cars.push("MDZ");
  cars.push("ASD");
  cars.push("Bolvo");
  for (int i = 0; i < cars.size(); i++)
    {
      //      cout << cars [i] << "\n";
      cars.get(i);
    }
}
