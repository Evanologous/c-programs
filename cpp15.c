#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  ofstream MyFile("idk.txt");
  MyFile<<"Files can be tricky";
  MyFile.close();
}
