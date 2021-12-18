#include <iostream>
#include <string>
using namespace std;

// template <typename T>
// T max(T a, T b) { return (a > b) ? a : b; }

void fun1(int n)
{
 if (n > 0)
 {
  cout
      << n << endl;
  fun1(n - 1);
 }
}

int main()
{
 int n;
 cin >> n;
 fun1(n);

 return 0;
}
