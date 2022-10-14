#include <iostream>
using namespace std;
int MaxConsecutive(bool arr[],int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == 1)
            {
                curr++;
            }
            else 
            break;
            
        }
        count = max(count,curr);
        
    }
    return count;
    
}
int main()
{
    bool arr[] = {1,1,0,1,1,1,0,0,1};
    int n = 9;
    cout<<MaxConsecutive(arr,n);
    return 0;
}