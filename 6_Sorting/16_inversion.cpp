#include <bits/stdc++.h>
using namespace std;
int inversion(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if(arr[i]>arr[j] && i<j)
            {
                count++;
            }
        }
        
    }
    return count;
    
}
int main()
{
    int arr[] = {2,4,1,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<inversion(arr,n);
    return 0;
}