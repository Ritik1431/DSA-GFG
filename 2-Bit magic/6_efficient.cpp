#include <iostream>
using namespace std;
int findOdd(int n)
{
    int arr[] = {4,3,4,4,4,2,2};
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res^arr[i];
    }
    return res;
    
}
int main()
{
    cout<<findOdd(7);
    return 0;
}