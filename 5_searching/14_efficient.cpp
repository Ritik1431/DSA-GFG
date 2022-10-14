#include <bits/stdc++.h>
using namespace std;
int Searchinginfinite(int arr[],int x)
{
    if(arr[0]==x)return 0;
    int i = 1;
    while(i<x)
    {
        i = i*2;
    }
    if(arr[i]==x) return i;
    else
    binary_search(x,x/2,i-1);
}
int main()
{
    // works with infinitely sized array.
    return 0;
}