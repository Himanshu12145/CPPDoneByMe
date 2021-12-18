#include <bits/stdc++.h>
using namespace std;
int main()
{

 int n, value;
 cout << "Enter the array : size ";
 cin >> n;
 cout << "Enter the array elements " << endl;
 int *arr = new int[n];
 for (int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 cout << "Enter the value to be searched :\n";
 cin >> value;

 for (int i = 0; i < n; i++)
 {
  if (arr[i] == value)
  {
   cout << "Found at pos :" << i;
   return 0;
  }
 }

 cout << "Element not found :(";

 return 0;
}