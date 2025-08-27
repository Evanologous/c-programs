#include <iostream>
using namespace std;
class car
{
 public:
  int speed(int max);
};
int car::speed(int max)
{
  return max;
}
int main()
{
  car myObj;
  cout<<myObj.speed(200)<<endl;
  return 0;
}
