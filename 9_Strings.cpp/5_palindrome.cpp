#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(string &str)
{
    int begin = 0, end = str.length()-1;
    while(begin<end)
    {
        if(str[begin]!=str[end])
        {
            return false;
        }
        begin++;
        end--;
    }
    return true;
}
int main()
{
    string str = "ABCBA";
    cout<<ispalindrome(str);
    return 0;
}