#include <iostream>
using namespace std;

int add (int a, int b)
{
  return a + b;
}

int sub (int a, int b)
{
  return a - b;
}

int main()
{
  int (*ptr) (int, int);
  ptr = add;
  cout << ptr (2, 3)<<"\n";		// result is 5
  ptr = sub;
  cout << ptr (2, 3)<<"\n";		// result is -1
}
