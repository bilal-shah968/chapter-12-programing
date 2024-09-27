#include <iostream>
#include <string.h>
using namespace std;
int main()
{
  char str1[50], str2[50];
  int ch,r;
  cout<<"Enter string 1:";
  cin.getline(str1,50);
  cout<<"Enter string 2:";
  cin.getline(str2,50);
  cout<<"Enter number of character to compare:";
  cin>>ch;
  r = strncmp(str1, str2, ch);
  if(r > 0)
  cout<<"String1 is greater than string2."<<endl;
  else if(r == 0)
  cout<<"String 1 is equal to string 2."<<endl;
  else
  cout<<"String 1 is less than string 2.";
  getc;
}
