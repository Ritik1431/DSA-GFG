#include <iostream>
using namespace std;
int del(int arr[], int n,int x)
{
    int i=0;
    for (i = 0; i < n; i++)
    {
        if(arr[i]==x)
        {
            break;

        }
    }
    if(i==n)
        return n;   

    for(int j = i;j<n-1;j++)
    {
        arr[j] = arr[j+1];
    }
        return n-1;
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = 6,x = 2;
    cout<<"Before Deletion"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"After Deletion"<<endl;
    n = del(arr,n,x);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}