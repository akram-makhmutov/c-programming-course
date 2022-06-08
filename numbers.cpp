#include <iostream>
#include <string>
using namespace std;

int rec (int n) {
    cin >> n;
    if (n != 0) {
        rec(n);
        cout << n << " ";
    }
}


int main()
{
    int n;
    rec(n);
    return 0;
}