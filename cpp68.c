#include <iostream>
using namespace std;
namespace MyNamespace
{
  int x = 42;
}
int main()
{
  cout<<MyNamespace::x<<endl;
  return 0;
}
