#include <iostream>
using namespace std;
class animal
{
 public:
  void animalsound()
  {
    cout<<"The animal makes a sound"<<endl;
  }
};
class pig : public animal
{
 public:
  void animalsound()
  {
    cout<<"The pig says: we wee"<<endl;
  }
};
class dog : public animal
{
 public:
  void animalsound()
  {
    cout<<"The dog says: bow wow"<<endl;
  }
};
class lion : public animal
{
 public:
  void animalsound()
  {
    cout<<"The lion says: roar roar"<<endl;
  }
};

int main()
{
  animal myanimal;
  pig mypig;
  dog mydog;
  lion mylion;

  myanimal.animalsound();
  mypig.animalsound();
  mydog.animalsound();
  mylion.animalsound();
  return 0;
}

  
