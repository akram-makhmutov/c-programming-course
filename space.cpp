#include <iostream>
using namespace std;

void main()
{
    char symba = '\0';
    while (cin.get(symba)) {
        if  ((symba == ' ') && (cin.peek() == ' ')) continue;
        cout << symba;
    }
}