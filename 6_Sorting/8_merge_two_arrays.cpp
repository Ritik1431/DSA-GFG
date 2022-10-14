#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int b[] , int m , int n )
{
    int c[m+n];
    for (int i = 0; i < m; i++)
    {
        c[i] = a[i];
    }
    for (int  i = 0; i < n; i++)
    {
        c[m+i] = b[i];
    }
    sort(c,c+m+n);
    for (int i = 0; i < m+n; i++)
    {
        cout<<c[i]<<" ";
    }
    
}
int main()
{
    int arr[] = {10,5,12,44,41};
    int arr1[] = {5,7,13,13};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(arr1)/sizeof(arr1[0]);
    merge(arr,arr1,m,n);

    return 0;
}