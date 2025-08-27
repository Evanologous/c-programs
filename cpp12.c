#include <iostream>
using namespace std;
class animal
{
 public:
  virtual void sound()
  {
    cout<<"Animal Sound"<<endl;
  }
  void sound2()
  {
    cout<<"Animal 2 Sound"<<endl;
  }
};
class dog : public animal
{
 public:
  /*
  void sound()
  {
    cout<<"Dog barks"<<endl;
  }
  */
  void sound2()
  {
    cout<<"Dog 2 barks"<<endl;
  }
};
int main()
{
  animal* a;
  //dog* b;
  dog d;
  a=&d;
  a->sound();
  a->sound2();
  //b=&d;
  //b->sound();
  //d.sound();
  return 0;
}
  
  
