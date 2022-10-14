#include <iostream>
using namespace std;
int largest(int arr[],int n)
{
    int res = 0;
    if(n==0)
    return 0;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[res])
        res = i;
    }
    return res;
}
int secondlargest(int arr[],int n)
{
   int larg = largest(arr, n);
   int res = -1;
   for(int i = 0;i<n;i++)
   {
    if (arr[i]!=arr[larg])
    {
        if (res==-1)
            res = i;
        else if(arr[i]>arr[res])
            res = i; 
    }
   }
    return res;


}
int main()
{
    int arr[] = {17,12,33,14,5};
    cout<<arr[largest(arr,5)]<<endl;;
    cout<<arr[secondlargest(arr,5)]<<endl;
    return 0;
}