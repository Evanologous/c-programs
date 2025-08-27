#include <iostream>
#include <set>
using namespace std;
int main()
{
  set<int, greater<int>> numbers = {1,5,2,6,9,4,7};
  for (int num:numbers)
    {
      cout << num << "\n";
    }
}
