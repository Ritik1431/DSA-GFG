#include <iostream>
using namespace std;
void MoveToEnd(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}
int main()
{
    int arr[] = {10,5,0,6,0,4};
    MoveToEnd(arr,6);
    return 0;
}