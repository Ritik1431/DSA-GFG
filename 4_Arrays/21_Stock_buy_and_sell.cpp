#include <iostream>
using namespace std;
int stock(int arr[],int n)
{
    int count = 0;
    int start = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (start<arr[i])
        {
            count += arr[i] - start; 
            start = arr[i];
        }
        else
        start =arr[i];
    }
    return count; 
}
int main()
{
    int arr[] = {1,5,3,8,12};
    int n = 5;
    cout<<stock(arr,n);
    return 0;
}