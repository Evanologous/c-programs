#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  vector<int> numbers = {1,6,2,3,9,4};
  //  sort(numbers.begin(),numbers.end());

  vector<int> copiedNumbers(5);
  copy(numbers.begin(), numbers.end(), copiedNumbers.begin());

  for(int num:copiedNumbers)
    {
      cout<<num<<endl;
    }
  return 0;
}
