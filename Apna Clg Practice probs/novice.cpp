#include <bits/stdc++.h>
using namespace std;

void arrRotate()
{
 int n;
 cin >> n;
 int arr[n];
 for (int i = 0; i < n; i++)
  cin >> arr[n];

 // if (n == 2)
 // {
 //  int temp = 0;
 //  temp = arr[0];
 //  arr[0] = arr[1];
 //  arr[1] = temp;
 //  cout << arr[0] << " " << arr[1];
 //  cout << endl;
 //  return;
 // }
 int temp = arr[0];
 for (int i = 0; i < n - 1; i++)
  arr[i] = arr[i + 1];
 arr[n - 1] = temp;

 for (int i = 0; i < n; i++)
  cout << arr[n] << " ";
 cout << endl;
}

int main()
{
 //code
 // int t;
 // cin >> t;
 // while (t != 0)
 // {
 //  t--;
 // }
 arrRotate();
 return 0;
}