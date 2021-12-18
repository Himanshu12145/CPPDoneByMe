#include <bits/stdc++.h>
using namespace std;
int pairSum(int arr[], int n, int k)
{

 int low = 0, high = n - 1;
 while (low < high)
 {
  if (arr[low] + arr[high] == k)
  {
   cout << low + 1 << " " << high + 1 << endl;
   return 0;
  }
  else if (arr[low] + arr[high] > k)
  {
   high--;
  }
  else
  {
   low++;
  }
 }
 return -1;

 //output of array
 // for (int i = 0; i < n; i++)
 // {
 //  /* code */
 //  cout << endl
 //       << arr[i] << " ";
 // }
}
int main()
{

 int n, k;
 cout << "Enter the array : size ";
 cin >> n;
 cout << "Enter the array elements " << endl;
 int arr[n];
 for (int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 cout << "Enter the number : ";
 cin >> k;
 cout << pairSum(arr, n, k) << endl;
 return 0;
}