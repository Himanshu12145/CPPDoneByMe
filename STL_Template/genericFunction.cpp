#include <iostream>
#include <string>
using namespace std;

template <typename T>
T max(T a, T b) { return (a > b) ? a : b; }

int main()
{
 cout << "Starting the log from right here..." << endl;
 cout << max(12, 4) << endl;
 cout << "Starting the log from right here..." << endl;

 return 0;
}
