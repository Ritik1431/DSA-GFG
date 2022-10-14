#include <iostream>
using namespace std;
int removeDup(int arr[], int n)
{
    int temp[n],res = 1;
    temp[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(temp[res - 1]!= arr[i] )
        {
            temp[res] = arr[i];
            res++;
        }
    }
    for (int i = 0; i < res; i++)
    {
        arr[i] = temp[i];  
    }
    for (int i = 0; i < res; i++)
    {
        cout<<arr[i]<<" ";
    }
    return res;
    
}
int main()
{
    int arr[] = {10,20,20,30,30,30};
    int n = 6;
    removeDup(arr,n);
    
    return 0;
}