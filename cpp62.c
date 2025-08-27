#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  vector<int> numbers = {1,6,2,3,9,4};

  auto it = find(numbers.begin(), numbers.end(), 7);

  if(it != numbers.end())
    {
      cout<<"The number 7 was found!"<<endl;
    }
  else
    {
      cout<<"The number 7 was not found."<<endl;
    }
  return 0;
}
