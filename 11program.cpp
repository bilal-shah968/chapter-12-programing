#include <iostream>
#include <cstring> 
using namespace std;

int main()
{
    char str[25];
    int len;
    
    cout << "Enter a string: ";
    cin.getline(str, 25);
    len = strlen(str);
    cout << "The string contains " << len << " characters." << endl;
    return 0;
}
