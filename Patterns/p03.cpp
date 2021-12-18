#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the number :\n";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            /* code */
            if ((i > 2 && i < n) && (j > 2 && j < n))
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }

    return 0;
}