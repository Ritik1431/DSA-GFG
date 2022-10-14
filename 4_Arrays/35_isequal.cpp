#include <iostream>
using namespace std;
bool isequal(int arr[],int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int l_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (l_sum==sum - arr[i])
        {
            return true;
        }
        l_sum += arr[i];
        sum -= arr[i];
    }
    return false;
    
}
int main()
{
    int arr[] = {5,4,8,5,4};
    int n = 5;
    cout<<isequal(arr,n);

    return 0;
}