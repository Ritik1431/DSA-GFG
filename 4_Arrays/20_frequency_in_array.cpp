#include <iostream>
using namespace std;
void frequency(int arr[],int n)
{
        int count = 1,i =1;
        while (i<n)
        {
            while (i<n && arr[i]==arr[i-1])
            {
                count++;
                i++;
            }
            cout<<arr[i-1]<<" "<<count<<endl;
            i++;
            count = 1;
        }
        if (n==1 || arr[n-1]!=arr[n-2])
        {
            cout<<arr[n-1]<<" "<<1; 
        }
        
}
int main()
{
    int arr[] = {10,10,10,15,14,14,20,20};
    int n = 8;
    frequency(arr,n);
    return 0;
}