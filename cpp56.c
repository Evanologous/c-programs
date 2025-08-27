#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<string> cars = {"Bolvo","CMW","Nod"};
  auto it = cars.begin();
  //  *it="idk";
  cout<<*it<<endl;
  for (auto it = cars.begin(); it != cars.end(); ++it)
    {
      cout<<*it<<endl;
    }
  return 0;
}
