#include <bits/stdc++.h>
using namespace std;
int first_occ(int arr[],int low, int high,int x)
{
    if(low>high) return -1;
    int mid = (low+high)/2;
    if(x>arr[mid]) return first_occ(arr,mid+1,high,x);
    else if(x<arr[mid]) return first_occ(arr,low,mid-1,x);
    else 
    {
        if(mid==0 || arr[mid-1]!=arr[mid]) return mid;
        else return first_occ(arr,low,mid-1,x);
    }
}
int main()
{
    int arr[] = {10,20,32,32,45,56};
    int x = 32;
    cout<<first_occ(arr,0,6,x);
    return 0;
}