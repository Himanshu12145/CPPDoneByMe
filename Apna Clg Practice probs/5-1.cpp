// Binary to Decimal conversion here go through it !!!
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the binary number:";
    cin >> n;
    int digit = 1, lastdigit = 1;
    while (n > 0)
    {
        int lastdigit1 = n % 10;
        digit += lastdigit * lastdigit1;
        lastdigit *= 2;
        n /= 10;
    }
    cout << endl
         << digit;
    return 0;
}
