#include <iostream>
using namespace std;
void leftRorate(int arr[], int n)
{
    int temp;
    temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}
int main()
{
    int arr[] = {2,3,5,4,6};
    leftRorate(arr,5);
    return 0;
}