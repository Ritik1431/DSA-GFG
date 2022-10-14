#include <iostream>
using namespace std;
int TrappingWater(int arr[],int n)
{
    int count = 0;
    int start = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (start > arr[i])
        {
            count += start - arr[i];
        }
        else
        {
            start = arr[i];
        }
        
    }
    return count;
    
    
}
// this doesnot work for all problem: therefore go for next solution:)
int main()
{
    int arr[] = {5,0,6,2,3};
    int n = 5;
    cout<<TrappingWater(arr,n);
    return 0;
}