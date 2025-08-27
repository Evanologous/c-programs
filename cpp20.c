#include <iostream>
#include <ctime>
using namespace std;
int main()
{
  time_t timestamp = time(&timestamp);
  struct tm dati = *localtime(&timestamp);

  cout<<dati.tm_hour;
}
  
  
  
