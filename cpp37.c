#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<string>
    cars={"Zuzuki","Bolvo","CMW","Goyota"};
  cout<<cars.front()<<endl;
  cout<<cars.back()<<endl;
  cout << cars.size()<<endl;
  cars.push_back("Tesla");
  cars.push_back("VW");
  cars.push_back("Mitsubishi");
  cars.push_back("Mini");
  cout<<cars.front()<<endl;
  cout<<cars.back()<<endl;
  cout << cars.size()<<endl;
  
  cars.pop_back();
  cars.pop_back();
  //  cout<<cars.pop_back()<<endl;
  //  cout<<cars.pop_front()<<endl;
  cout<<cars.front()<<endl;
  cout<<cars.back()<<endl;
  cout << "Starting loop" << endl;
  for (string x : cars) { // 'x' is a copy of each element
    cout << x << endl;
  }

  //cars.clear();

  cout << "Starting loop" << endl;
  for (string x : cars) { // 'x' is a copy of each element
    cout << x << endl;
    
  }
  for (int i = 0; i < cars.size(); i++) {
  cout << cars[i] << "\n";
}
  
}
