#include <iostream>
using namespace std;
int TrappingWater(int arr[],int n)
{
    int res = 0;
    int LMax[n],RMax[n];
    LMax[0] = arr[0]; 
    for (int i = 1; i < n; i++)
    {
        LMax[i] = max(arr[i],LMax[i-1]);
    }
    RMax[n-1] = arr[n-1];
    for (int i = n-2; i >=0; i--)
    {
        RMax[i] = max(arr[i],RMax[i+1]);
    }
    for (int i = 1; i < n-1; i++)
    {
        res += min(LMax[i],RMax[i]-arr[i]);// first it will find minimun from lmax and rmax then 
                                          //  then it will subtract arr[i] from minimum value.
    }
    
    return res;
}
int main()
{
    int arr[] = {5,0,6,2,3};
    int n = 5;
    cout<<TrappingWater(arr,n);
    return 0;
    
}