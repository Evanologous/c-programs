#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  vector<int> numbers = {1,6,2,3,9,4};
  sort(numbers.begin(),numbers.end());

  auto it = min_element(numbers.begin(),numbers.end());
  cout<<*it;
}
