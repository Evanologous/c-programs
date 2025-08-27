#include <iostream>
#include <map>
using namespace std;
int main()
{
  map <string, int> people = {{"John",23},{"Afel",64},{"Gora",56}};
  cout<<"John is: "<<people.at("John")<<"\n";
  cout<<"Afel is: "<<people.at("Afel")<<endl;
  cout<<"Gora is: "<<people.at("Gora")<<endl;

  people.insert({"Joe",34});
  people.insert({"Joe",67});

  cout<<people.at("Joe")<<endl;
  cout<<"How many people: "<<people.size();
}
