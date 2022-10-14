#include <iostream>
using namespace std;
void moveZero(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            for (int j = i+1; j < n; j++)
            {
                if (arr[j]!=0)
                {
                    swap(arr[i],arr[j]);
                }
                
            }
            
        }
        
    }
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main()
{
    int arr[] = {10,0,5,4,0,0,8};
    moveZero(arr,7);
    return 0;
}