#include <bits/stdc++.h>
using namespace std;
bool find_pairs(int arr[],int n,int x)
{
    int i = 0, j = n-1;
    while(i<=j)
    {
        if(arr[i]+arr[j]==x){return true;}
        if(arr[i]+arr[j]<x)
        {
            i++;
        }
        if(arr[i]+arr[j]>x)
        {
            j--;
        }
    }
    return false;
}
int main()
{
    int arr[] = {2,5,8,12,30};
    int n = 5;
    int x = 20;
    cout<<find_pairs(arr,n,x);
    return 0;
}