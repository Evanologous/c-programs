#include <iostream>
#include <ctime>
using namespace std;
int main()
{
  struct tm dati;
  dati.tm_year = 2025-1900;
  dati.tm_mon = 0;
  dati.tm_mday = 31;
  dati.tm_hour = 0;
  dati.tm_min = 0;
  dati.tm_sec = 0;
  dati.tm_isdst = -1;
  mktime(&dati);

  cout<<asctime(&dati);

  return 0;
}
  
  
  
