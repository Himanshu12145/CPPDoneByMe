#include <bits/stdc++.h>
using namespace std;
int insertSort(int arr[], int n)
{

 for (int i = 1; i < n; i++)
 {
  int j = i - 1;
  int currentValue = arr[i];
  while (arr[j] > currentValue && j >= 0)
  {
   arr[j + 1] = arr[j];
   j--;
  }
  arr[j + 1] = currentValue;
 }

 for (int i = 0; i < n; i++)
 {
  /* code */
  cout << arr[i] << " ";
 }

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
 insertSort(arr, n);
 return 0;
}