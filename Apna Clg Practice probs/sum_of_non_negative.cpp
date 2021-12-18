#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the number";
    cin >> n;
    while (n > 0)
    {
        sum += n;
        cout << "Enter the number";
        cin >> n;
    }
    cout << "The sum is : " << sum << endl;

    return 0;
}