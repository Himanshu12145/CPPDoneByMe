#include <bits/stdc++.h>
using namespace std;
int bubbleSort(int arr[], int n)
{

 int counter = 1;
 while (counter < n)
 {
  for (int i = 0; i < n - counter; i++)
  {

   if (arr[i] > arr[i + 1])
   {
    int temp = arr[i];
    arr[i] = arr[i + 1];
    arr[i + 1] = temp;
   }
  }
  counter++;
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
 bubbleSort(arr, n);
 return 0;
}