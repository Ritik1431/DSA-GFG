#include <iostream>
using namespace std;

int main()
{
    int n,r,temp,sum=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    temp = n;

    while(n>0)
        {
            r = n%10;
            sum = (sum*10)+r;
            n = n/10;
        }
    if(sum==temp)
        cout<<"No is palindrome"<<endl;
    else
        cout<<"No is not a palindrome "<<endl;
    return 0;
}