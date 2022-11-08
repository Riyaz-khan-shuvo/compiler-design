#include<bits/stdc++.h>
using namespace std;
void DeleteString(string str)
{
    str.erase();
  
    cout << "After erase() : ";
    cout << str;
}
int main()
{
    string str("Hello World!");
  
    cout << "Before erase() : ";
    cout << str << endl;
    DeleteString(str);
  
    return 0;
}