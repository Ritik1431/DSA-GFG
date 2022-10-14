#include <iostream>
using namespace std;
int Binary_Search(int arr[],int n,int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {12,15,45,8,6};
    int x = 45;
    int n = 5;
    cout<<Binary_Search(arr,n,x);
    return 0;
}