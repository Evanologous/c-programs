#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  srand(time(NULL));
  int randomNum = rand() % 101;
  cout<<randomNum<<endl;
  return 0;
}
