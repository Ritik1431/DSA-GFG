#include <iostream>
using namespace std;
int prefixSum(int arr[],int i ,int j)
{
    int sum = 0;
    for (i; i <= j; i++)
    {
        sum += arr[i];
    }
    return sum;
    
}
int main()
{
    int arr[] = {2,8,3,9,6,5,4};
    cout<<prefixSum(arr,0,2)<<endl;
    cout<<prefixSum(arr,1,3)<<endl;
    cout<<prefixSum(arr,2,6)<<endl;
    return 0;
}