#include <iostream>
#include <map>
using namespace std;
int main()
{
  map <string, int> people = {{"John",23},{"Afel",64},{"Gora",56}};
  cout<<"John is: "<<people["John"]<<"\n";
  cout<<"Afel is: "<<people["Afel"]<<endl;
  cout<<"Gora is: "<<people["Gora"]<<endl;
}
