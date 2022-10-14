#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        int min_element = 0;
        for (int j = 1; j < n; j++)
        {
            if(arr[j] < arr[min_element] )
            {
                min_element = j;
            }
        }
        temp[i] = arr[min_element];
        arr[min_element] = INFINITY;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
    
}
int main()
{
    int arr[] = {12,45,52,11,22};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}