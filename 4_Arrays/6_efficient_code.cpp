#include <iostream>
using namespace std;
int secondary(int arr[],int n)
{
    int res =-1,largest = 0;
    for (int  i = 0; i < n; i++)
    {
        if(arr[i]>arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if(arr[i]!=arr[largest])
        {
            if (res == -1 || arr[i]>arr[res])
            {
                res = i;
            }
            
        }
        return res;
    }
    
}
int main()
{
    
    return 0;
}