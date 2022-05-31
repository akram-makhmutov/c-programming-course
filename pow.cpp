#include <iostream>
using namespace std;

int power (int p) {
    int pov = 1;
    if (p == 0) {
        return pov;
    }
    for (int i = 0; i < p; i++) {
        pov = 2 * pov;
    }
    return pov;
}

int main()
{
    
    int a, t, p;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a;

        for (int i = 0; power(i) <= a; i++) {
            p = i;
        }
        cout << p << endl;
    }
    return 0;
}