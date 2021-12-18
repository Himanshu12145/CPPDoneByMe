#include <iostream>
// #include <string>
using namespace std;

void str_rev(string str)
{
 if (str.length() == 0)
  return;

 str_rev(str.substr(1));
 cout << str[0];
}

int main()
{
 cout << "Enter the length of the respective string" << endl;
 string *str = new string[n];
 for (int i = 0; i < n; i++)
  cin >> str[i];
 str_rev(string & str);
 return 0;
}