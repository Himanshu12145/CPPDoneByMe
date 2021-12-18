#include <bits/stdc++.h>
using namespace std;
bool max(int a, int b, int c)
{
    int x = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    int y, z;
    if (x == a)
    {
        y = b;
        z = c;
    }
    else if (x == b)
    {
        y = a;
        z = c;
    }
    else if (x == c)
    {
        y = a;
        z = b;
    }
    if (x * x == y * y + z * z)
    {
        return true;
    }
    return false;
}
int32_t main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (max(a, b, c))
    {
        cout << "Pythagoras Triplet!";
        return 0;
    }

    cout << "Scamm!";
    return 0;
}