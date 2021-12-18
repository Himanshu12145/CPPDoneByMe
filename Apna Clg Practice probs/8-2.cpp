#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int n, int key)
{
    int start = 0, end = n;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = end - 1;
        }
        else if (arr[mid] < key)
        {
            start += 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the array length ";
    cin >> n;
    int *arr = new int[n];
    cout << "\nEnter the array elements[sorted]: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "\nEnter the element to be searched(key) :";
    cin >> key;
    cout << "\n\nYour element is at : "
         << binarySearch(arr, n, key) << endl;
}