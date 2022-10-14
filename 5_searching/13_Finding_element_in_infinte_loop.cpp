#include <bits/stdc++.h>
using namespace std;
int FindingElement(int arr[],int x)
{
    int i = 0;
    while(true)
    {
        if(arr[i]==x){return i;}
        else if(arr[i]>x){return -1;}
        i++;
    }
}
int main()
{
    // It is used when we have infinite sized array.
    return 0;
}