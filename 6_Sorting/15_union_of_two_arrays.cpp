#include <bits/stdc++.h>
using namespace std;
void union_arrays(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (i > 0 && a[i - 1] == a[i])
        {
            i++;
            continue;
        }
        if (j > 0 && b[j - 1] == b[j])
        {
            j++;
            continue;
        }
        if (a[i] < b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else if (a[i] > b[j])
        {
            cout << b[j] << " ";
            j++;
        }
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
    while (i < m)
    {
        if (i == 0 || a[i] != a[i - 1])
        {
            cout << a[i] << " ";
            i++;
        }
    }
    while (j < n)
    {
        if (j == 0 || b[j] != b[j - 1])
        {
            cout << b[j] << " ";
            j++;
        }
    }
}
int main()
{
    int arr[] = {10, 12, 12, 45, 45, 89};
    int m = sizeof(arr) / sizeof(arr[0]);
    int arr1[] = {10, 12, 45, 45, 89};
    int n = sizeof(arr) / sizeof(arr[0]);
    union_arrays(arr, arr1, m, n);
    return 0;
}