#include <iostream>
using namespace std;
int main()
{
  try
    {
      throw 505;
    }
  catch (int errorCode)
    {
      cout<<"Error occured: "<<errorCode;
    }
}
