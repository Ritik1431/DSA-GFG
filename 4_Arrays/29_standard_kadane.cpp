#include <iostream>
using namespace std;
int kadane(int arr[],int n)
{
    int res = arr[0];int maxEnding = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding = max(arr[i],maxEnding + arr[i]);
        res =  max(res,maxEnding);
    }
    return res;
    
}
int main()
{
    int arr[] = {8,-4,3};
    int n = 3;
    cout<<kadane(arr,n);
    return 0;
}