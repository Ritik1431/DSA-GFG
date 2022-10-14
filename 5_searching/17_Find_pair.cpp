#include <bits/stdc++.h>
using namespace std;
int find_pair(int arr[], int n, int x)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i + 1; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[] = {3, 5, 9, 2, 8};
    int n = 5;
    int x = 11;
    cout << find_pair(arr, n, x);
    return 0;
}