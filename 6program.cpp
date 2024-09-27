#include <iostream>
using namespace std;
int main()
{
    char s1[50], s2[50];
    int i =0;
    cout<<"Enter a string:";
    cin.getline(s1,50);
    while(s1[i] != '\0')
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    cout<<"The value of s1:"<<s1<<endl;
    cout<<"The value of s2:"<<s2<<endl;
    getc;
    
}