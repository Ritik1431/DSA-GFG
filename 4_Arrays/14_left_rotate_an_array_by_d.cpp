#include <iostream>
using namespace std;
void leftShift(int arr[],int n)
{
    int temp;
    temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}
void ShiftByN(int arr[],int n,int d)
{
    for (int i = 0; i < d; i++)
    {
        leftShift(arr,n);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int arr[]  = {1,2,3,4,5};
    ShiftByN(arr,5,2);
    return 0;
}