// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

string reverseWord(string str);

int main()
{

 int t;
 cin >> t;
 while (t--)
 {
  string s;
  cin >> s;

  cout << reverseWord(s) << endl;
 }
 return 0;
}

// } Driver Code Ends

//User function Template for C++

string reverseWord(string str)
{
 // char temp;
 // int n = str;
 // while (n != '\0')
 //  n++;
 // // n--;
 // for (int i = 0, j = n - 1; i >= j; i++, j--)
 // {
 //  temp = str[i];
 //  str[i] = str[j];
 //  str[j] = temp;
 // }

 reverse(str.begin(), str.end());
 return str;

 //Your code here
}
