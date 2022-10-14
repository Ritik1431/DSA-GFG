#include <iostream>
using namespace std;

int main()
{
    int n,count=0;
    cout<<"Enter the number"<<endl;
    cin>>n;

    if(n==0)
        cout<<"Entered zero "<<endl;
    else
        while(n!=0)
        {
            n = n/10;
            count++;
        }
    cout<<"No of digits : "<<count<<endl;
    return 0;
}