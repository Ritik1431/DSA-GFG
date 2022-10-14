// in this we are not going to use auxillary space . i.e we are not
// going to make a temp array.
#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_index = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
           
        }
         swap(arr[i],arr[min_index]);
    }
}
int main()
{
    int arr[] = {12,45,52,11,22};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}