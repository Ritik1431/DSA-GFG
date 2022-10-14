#include <iostream>
using namespace std;
int maxDiff(int arr[],int n)
{
    int minval = arr[0],res = arr[1] - arr[0];
    for (int i = 1; i<n;i++)
    {
        res = max(res,arr[i]-minval);
        minval = min(minval,arr[i]);
        
    }   
    return res;
    
}
int main()
{
    int arr[] = {2,3,10,6,4,8,1};
    int n = 7;
    cout<<maxDiff(arr,n);
    return 0;
}