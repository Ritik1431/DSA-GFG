#include <iostream>
using namespace std;

int main()
{
    int n,fact=1;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for (int i = 0; i <=n; i++)
    {
        fact *=i;
    }
    cout<<"factorial is "<<fact<<endl;

    return 0;
}