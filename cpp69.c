#include <iostream>
using namespace std;
namespace MyNamespace
{
  int x = 42;
}
using namespace MyNamespace;
int main()
{
  cout<<x<<endl;
  return 0;
}
