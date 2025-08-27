#include <iostream>
using namespace std;
template <typename T>
class addclass
{
 public:
  //template <typename T>
  
    T add(T a, T b)
    {
      return a+b;
    }
    //template <typename T>
    T add1(T a, T b, T c)
    {
      return a+b+c;
    }
};
int main()
{
  addclass <int> a;
  addclass <char> c;
  addclass <double> b;
  cout<<a.add1(5,3,2)<<endl;
  cout<<b.add(2.5,1.5)<<endl;
  cout<<c.add1('z','z','z')<<endl;
  return 0;
}
