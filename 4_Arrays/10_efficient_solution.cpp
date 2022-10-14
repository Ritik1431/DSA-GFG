#include <iostream>
using namespace std;
int removing(int arr[],int n)
{
    int res = 1;
    for (int  i = 1; i < n; i++)
    {
        if(arr[res]!=arr[i-1])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    for (int i = 0; i < res; i++)
    {
        cout<<arr[i]<<" ";
    }
    return res;
    
    
}
int main()
{
    int arr[] = {10,20,20,30,30};
    removing(arr,5);
    return 0;
}