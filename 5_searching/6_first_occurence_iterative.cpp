#include <bits/stdc++.h>
using namespace std;
int first_occurence(int arr[],int n,int low,int high,int x)
{
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(x>arr[mid]){low = mid+1;}
        else if(x<arr[mid]){high = mid-1;}
        else
        {
            if(mid==0 || arr[mid-1]!= arr[mid])
            return mid;
            else high = mid-1;
        }
    }
    return -1;
    
}
int main()
{
    int arr[] = {10,20,32,32,45,56};
    int x = 46;
    cout<<first_occurence(arr,6,0,6,x);
    return 0;
}