#include <bits/stdc++.h>
using namespace std;
int sumOfSubarray(int arr[], int n)
{

 int sum = 0;

 for (int i = 0; i < n; i++)
 {
  sum = 0;
  for (int j = i; j < n; j++)
  {

   sum += arr[j];
   cout << sum << " ";
  }
 }
 //output of array
 // for (int i = 0; i < n; i++)
 // {
 //  /* code */
 //  cout << endl
 //       << arr[i] << " ";
 // }

 return 0;
}
int main()
{

 int n, value;
 cout << "Enter the array : size ";
 cin >> n;
 cout << "Enter the array elements " << endl;
 int arr[n];
 for (int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 sumOfSubarray(arr, n);
 return 0;
}