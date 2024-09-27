#include <iostream>
#include <string.h>
using namespace std;
int main()
{
  char str1[50], str2[50];
  int r;
  cout<<"Enter first string:";
  cin.getline(str1,50);
  cout<<"Enter second string:";
  cin.getline(str2,50);
  r = strcmp(str1, str2);
  if(r < 0)
  cout<<"String1 is less than string2.";
  else if(r == 0)
  cout<<"String 1 is equal to string 2.";
  else
  cout<<"String 1 is greater than string 2.";
  getc;
}
