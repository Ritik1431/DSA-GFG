#include <iostream>
using namespace std;
int windowSliding(int arr[],int n,int k)
{
    int curr_Sum = 0;
    for (int i = 0; i < k; i++)
    {
        curr_Sum += arr[i];
    }
    int max_sum =curr_Sum;
    for (int i = k; i < n; i++)
    {
        curr_Sum += (arr[i] - arr[i-k]);
        max_sum = max(curr_Sum,max_sum);
    }
    return max_sum;
}
int main()
{
    int arr[] = {1,8,30,-5,20,7};
    int n = 6;
    int k = 3;
    cout<<windowSliding(arr,n,k);
    return 0;
}