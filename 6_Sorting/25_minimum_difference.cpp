#include <bits/stdc++.h>
using namespace std;
int minimum_difference(int arr[], int n)
{
    sort(arr, arr + n);
    int count = arr[1] - arr[0];
    for (int i = 1; i < n-1; i++)
    {
        int mini = arr[i + 1] - arr[i];
        count = min(count, mini);
    }
    return count;
}
int main()
{
    int arr[] = {8,-1,0,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << minimum_difference(arr, n);
    return 0;
}