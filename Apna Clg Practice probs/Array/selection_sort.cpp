#include <bits/stdc++.h>
using namespace std;
int selectionSort(int arr[], int n)
{
 int temp = 0;

 for (int i = 0; i < n - 1; i++)
 {
  for (int j = i + 1; j < n; j++)
  {
   if (arr[i] > arr[j])
   {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
   }
  }
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
 selectionSort(arr, n);
 return 0;
}