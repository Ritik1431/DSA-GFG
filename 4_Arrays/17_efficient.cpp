#include <iostream>
using namespace std;
void Leader(int arr[],int n)
{
    int currentLeader = arr[n-1];
    cout<<currentLeader<<" ";
    for(int i = n-2;i>=0;i--)
    {
        if (currentLeader<arr[i])
        {
            currentLeader = arr[i];
            cout<<currentLeader<<" ";

        }
        
    }
}
int main()
{
    int arr[] = {7,10,4,10,6,5,2};
    int n = 7;
    Leader(arr,n);
    return 0;
}