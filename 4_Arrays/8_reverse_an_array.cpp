#include <iostream>
using namespace std;
void reverse(int arr[],int n)
{
    if(n==0)
        cout<<"No element"<<endl;
    int low = 0, high = n-1,temp;
    while(low<high)
    {
        temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

int main()
{
    int arr[] = {4,8,6,2,4};
    reverse(arr,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}