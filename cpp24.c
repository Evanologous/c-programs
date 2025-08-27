#include <iostream>
#include <ctime>
using namespace std;
int main()
{
  time_t now;
  time_t nextyear;
  struct tm dati;

  now = time (NULL);
  dati = *localtime(&now);
  dati.tm_year = dati.tm_year + 1;
  dati.tm_mon = 0;
  dati.tm_mday = 1;
  dati.tm_hour = 0;
  dati.tm_min = 0;
  dati.tm_sec = 0;
  dati.tm_isdst = -1;
  nextyear = mktime(&dati);

  int diff = difftime(nextyear,now);

  cout<<diff<<" seconds until next year"<<endl;

  return 0;
}
  
  
  
