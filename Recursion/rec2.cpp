#include <iostream>
#include <string>
using namespace std;

// template <typename T>
// T max(T a, T b) { return (a > b) ? a : b; }

int fact(int n)
{
 cout << "\nHere the code is executed:\n";
 if (n)
 {
  return n * fact(n - 1);
 }
 return 1;
}

int main()
{
 int n;
 cout << "Enter the number here:\n";
 cin >> n;
 cout << fact(n);

 return 0;
}
