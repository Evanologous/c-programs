#include <iostream>
using namespace std;

template <typename T>
class box
{
  T value;
  box (T v)
    {
      value = v;
    }
  void show()
  {
    cout<<"Values: "<<value<<endl;
  }
};
int main()
{
  box<int> intbox(50);
  box<string> strbox("Hello");

  intbox.show();
  strbox.show();
  return 0;
}
