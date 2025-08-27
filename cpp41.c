#include <iostream>
#include <stack>
using namespace std;
int main()
{
  stack <string> cars;
  cars.push("MDZ");
  cars.push("ASD");
  while (!cars.empty()){
    std::cout << cars.top() << std::endl;
    cars.pop();
  }
}
