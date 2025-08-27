#include <iostream>
using namespace std;
class animal
{
 public:
  void sound()
  {
    cout<<"Animal Sound"<<endl;
  }
};
class dog : public animal
{
 public:
  void sound()
  {
    cout<<"Dog barks"<<endl;
  }
};
int main()
{
  animal* a;
  //dog* b;
  dog d;
  a=&d;
  a->sound();
  //b=&d;
  //b->sound();
  //d.sound();
  return 0;
}
  
  
