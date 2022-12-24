#include <bits/stdc++.h>    // Dutch National Flag Algorithm
using namespace std;
void sorting_0_1_2(int arr[], int n)
{
    int  low = 0, mid = 0, high = n-1;
    while (mid<=high)
    {
        switch (arr[mid])
        {
        case 0:
        swap(arr[low],arr[mid]);
            low++;
            mid++;
            break;
        
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[high], arr[mid]);
            high--;
            break;
        }
    }
 
}
int main()
{
    int arr[] = {1,0,2,0,1,2};
    int n = 6;
    sorting_0_1_2(arr,n); 
    for(int x :arr)
        cout<<x<<" ";
    return 0;
}