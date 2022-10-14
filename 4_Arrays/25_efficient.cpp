#include <iostream>
using namespace std;
int MaxConsecutive(int arr[],int n)
{
    int count = 0,curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            curr = 0;
        }
        else
        {
            curr++;
            count = max(count,curr);
        }
        
    }
    return count;
    
}
int main()
{
    int arr[] = {0,1,1,0,1,1,1};
    int n = 7;
    cout<<MaxConsecutive(arr,n);
    
    return 0;
}