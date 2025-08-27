#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<string> cars = {"Bolvo","CMW","Nod"};
  vector<string>::iterator it;

  for (it = cars.begin()+1;it != cars.end(); ++it)
    {
      cout<<*it<<endl;
    }
  return 0;
}
