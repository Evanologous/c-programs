#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  vector<int> numbers = {1,6,2,7,3,4,9};

  sort(numbers.rbegin(), numbers.rend());

  for(int num:numbers)
    {
      cout<<num<<endl;
    }
  return 0;
}
