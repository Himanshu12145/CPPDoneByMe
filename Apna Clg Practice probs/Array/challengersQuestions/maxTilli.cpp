#include <bits/stdc++.h>
using namespace std;
int maxTill_i(int arr[], int n)
{
 int mx = arr[0];
 for (int i = 0; i < n; i++)
 {

  // if (arr[i] > mx)
  // {
  //  mx = arr[i];
  //  continue;
  // }
  // arr[i] = mx;

  if (arr[i] > mx)
  {
   mx = arr[i];
   cout << mx << " ";
   continue;
  }
  cout << mx << " ";
 }

 //output of array
 for (int i = 0; i < n; i++)
 {
  /* code */
  cout << endl
       << arr[i] << " ";
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
 maxTill_i(arr, n);
 return 0;
}