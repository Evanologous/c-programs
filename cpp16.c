#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  ofstream MyWriteFile("idk.txt");
  MyWriteFile<<"Files can be tricky";
  MyWriteFile.close();
  string myTxt;
  ifstream MyReadFile("idk.txt");
  while (getline(MyReadFile,myTxt))
    {
      cout<<myTxt;
    }
  MyReadFile.close();
}
