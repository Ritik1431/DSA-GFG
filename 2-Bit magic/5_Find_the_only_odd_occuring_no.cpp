#include <iostream>
using namespace std;
void onlyOcc(int b)
{
    int n;
    int arr[10] = {2,4,4,5,5,7,7};
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if(arr[j]==arr[i])
                count++;
            if (count%2!=0)
                cout<<arr[i]<<endl;    
        }   
        
    }
    
}
int main()
{
    onlyOcc(7);
    return 0;
}