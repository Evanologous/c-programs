#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class dog
{
 public:
  string bark(string sound);
};
string dog::bark(string sound)
{
  return sound;
}
int main()
{
  dog myObj;
  cout<<myObj.bark("woof")<<endl;
  return 0;
}
