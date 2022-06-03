#include <iostream>
using namespace std;

int gcd (int a, int b)
{
  if ((a == 0) && (b == 0))
    return a + b;
  if ((a != 0) && (b == 0))
    return a;
  if ((a == 0) && (b != 0))
    return b;
  if (a > b)
    return a = a % b;
  if (b < a)
    return b = b % a;
}