#include <bits/stdc++.h>
using namespace std;
void segregate_negpos(int arr[], int n)
{
    int temp[n],i=0;
    for (int j = 0; j < n; j++)
    {
        if(arr[j]<0)
        {
            temp[i] = arr[j];
            i++;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if(arr[j]>0)
        {
            temp[i] = arr[j];
            i++;
        }
    }
    for (int j = 0; j < n; j++)
    {
        arr[j] = temp[j];
    }

}
int main()
{
    int arr[] = {-5,9,10,-14,56};
    int n = sizeof(arr)/sizeof(arr[0]);
    segregate_negpos(arr,n);
    for (int x : arr)
    {
        cout<<x<<" ";
    }
    
    return 0;
}