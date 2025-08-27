#include <iostream>
#include <ctime>
using namespace std;
int main()
{
  struct tm dati;
  dati.tm_year = 2025 - 1900;
  dati.tm_mon = 11;
  dati.tm_hour = 15;
  dati.tm_min = 0;
  dati.tm_sec = 0;
  dati.tm_mday = 02;
  dati.tm_isdst = -1;

  mktime(&dati);

  string weekdays[]=
    {
      "Sunday",
      "Monday",
      "Tuesday",
      "Wednesday",
      "Thursday",
      "Friday",
      "Saturday"
    };
  cout<<"The date is on a "<<weekdays[dati.tm_wday];
}
  
  
  
