#include <iostream>
#include <ctime>
using namespace std;
int main()
{
  time_t timestamp = time(NULL);
  struct tm dati = *localtime(&timestamp);

  cout<<asctime(&dati)<<endl;
  return 0;
}
  
  
  
