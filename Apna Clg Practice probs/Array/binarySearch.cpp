#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int n, int value)
{
  int l = 0, h = n, mid;

  while (l <= h)
  {

    mid = (h + l) / 2;
    if (arr[mid] == value)
    {
      cout << "Element found at " << mid + 1;
      return 0;
    }
    else if (value > arr[mid])
      l = mid + 1;
    else if (value < arr[mid])
      h = mid - 1;
  }
  cout << "Element not found :(" << endl;
  return -1;
}
int main()
{

  int n, value;
  cout << "Enter the array : size ";
  cin >> n;
  cout << "Enter the array elements(must be sorted) " << endl;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "Enter the value to be searched :\n";
  cin >> value;
  binarySearch(arr, n, value);
  return 0;
}