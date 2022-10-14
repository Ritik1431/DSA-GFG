#include <bits/stdc++.h>
using namespace std;
void intersection(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            i++;
            continue;
        }
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            cout<<a[i]<<" ";i++;j++;
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