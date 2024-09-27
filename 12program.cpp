#include <iostream>
#include <cstring> 
using namespace std;

int main()
{
    char str1[20], str2[20];
    int len;

    cout << "Enter first string: ";
    cin.getline(str1, 20);  

    cout << "Enter second string: ";  
    cin.getline(str2, 20);  
    len = strlen(str1);
    cout << str1 << " has " << len << " characters." << endl;
    len = strlen(str2);
    cout << str2 << " has " << len << " characters." << endl;
    strcat(str1, str2);
    cout << "String 1 after concatenation: " << endl;
    puts(str1);

    return 0;
}
