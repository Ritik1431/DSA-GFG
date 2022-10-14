#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n)
{
    bool swapped = false;
    for (int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1 ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
    if(swapped == false)
    {
        break;
    }
    }
    
}
int main()
{
    int arr[] = {10,41,21,54};
    int n = 4;
    bubble_sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}