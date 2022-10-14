#include <bits/stdc++.h>
using namespace std;
void PeakElement(int arr[], int n)
{
    if (n == 1)
    {
        cout << arr[0] << " ";
    }
    if (arr[0] > arr[1])
    {
        cout << arr[0] << " ";
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            cout << arr[i] << " ";
        }
    }
    if (arr[n - 1] > arr[n - 2])
    {
        cout << arr[n - 1] << " ";
    }
};
int main()
{
    int arr[] = {22, 5, 14, 8, 6, 7};
    int n = 6;
    PeakElement(arr, n);
    return 0;
}