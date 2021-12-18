#include <iostream>
using namespace std;

bool sorted(int arr, int n)
{
 static int i = 0;
 if (n == 1)
  return true;
 if (arr[i] > arr[i + 1])
  return false;
 return sorted(arr[0] < arr[1] && arr + 1, n - 1);
 i++;
}

int main()
{

 int n;
 cout << "Enter the array length : " << endl;
 cin >> n;
 int *arr = new int[n];
 cout << "\nenter the array elements to check in sorted condition or not: \n";
 for (int i = 0; i < n; i++)
 {
  /* code */
  cin >> arr[n];
 }
 cout << "The sorted condition is :" << sorted(arr[], n);
 return 0;
}
