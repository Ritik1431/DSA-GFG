#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else
        {
            cout << b[j] << " ";
            j++;
        }
    }
    while(i<m)
    {
        cout<<a[i]<<" ";
        i++;
    }
    while(j<n)
    {
        cout<<b[j]<<" ";
        j++;
    }
}
int main()
{
    int arr[] = {10,15,20,27};  // Both arrays should be sorted.
    int arr1[] = {5,7,13,26};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(arr1)/sizeof(arr1[0]);
    merge(arr,arr1,m,n);
    return 0;
}