#include <bits/stdc++.h>
using namespace std;
int count_occurences(int arr[],int n,int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==x)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[] = {12,12,26,56,56,56};
    int x = 12,n=6;
    cout<<count_occurences(arr,n,x);
    return 0;
}