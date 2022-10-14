#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int low, int mid, int high)
{
    int m = mid - low + 1;
    int n = high - mid;
    int left[m], right[n];
    for (int i = 0; i < m; i++)
    {
        left[i] = a[low + i];
    }
    for (int i = 0; i < m; i++)
    {
        right[i] = a[mid + i + 1];
    }
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (left[i] <= right[j])
        {
            cout << left[i] << " ";
            i++;
        }
        else
        {
            cout << right[j] << " ";
            j++;
        }
    }
    while (i < m)
    {
        cout << left[i] << " ";
        i++;
    }
    while (j < n)
    {
        cout << right[j] << " ";
        j++;
    }
}
int main()
{
    int arr[] = {10, 20, 40, 20, 30};
    int low = 0, mid = 2, high = 4;
    merge(arr, low, mid, high);
    return 0;
}