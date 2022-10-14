#include <bits/stdc++.h>
using namespace std;
void intersection(int a[], int b[], int m , int n)
{
    for (int i = 0; i < m; i++)
    {
        if(i>0 && a[i]==a[i-1])
        {
            continue;
        }
        for (int j = 0; j < n; j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<" ";
                break;
            }
        }
        
    }
    
}
int main()
{
    int arr[] = {10,12,12,45,45,89};
    int m = sizeof(arr)/sizeof(arr[0]);
    int arr1[] = {10,12,45,45,89};
    int n = sizeof(arr)/sizeof(arr[0]);
    intersection(arr,arr1,m,n);

    return 0;
}