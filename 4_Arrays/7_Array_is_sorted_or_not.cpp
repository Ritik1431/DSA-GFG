#include <iostream>
using namespace std;
void isSorted(int arr[], int n)
{
    if (n == 0)
        cout<<"No element in an array"<<endl;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i-1])
        {
           cout<<"Unsorted"<<endl;
           return;
        }
    }
        cout<<"Sorted"<<endl;
    
    
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    isSorted(arr, 5);
    return 0;
}