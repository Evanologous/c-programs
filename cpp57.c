#include <iostream>
#include <map>
using namespace std;
int main()
{
  map <string, int> people = {{"John",23},{"Afel",64},{"Gora",56}};

  for(auto it=people.begin(); it != people.end(); ++it)
    {
      cout<<it->first<<"is: "<<it->second<<endl;
    }
  return 0;
}
