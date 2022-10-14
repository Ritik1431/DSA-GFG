#include <iostream>
using namespace std;
int largest(int arr[],int n)
{
    int res = arr[0];
    if(n==0)
    return 0;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i+1]>res)
        res = arr[i+1];
        
    }
    return res;
}
int main()
{
    int arr[] = {17,12,33,14,5};
    cout<<largest(arr,5);
    return 0;
}