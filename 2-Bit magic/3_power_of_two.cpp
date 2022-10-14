#include <iostream>
using namespace std;
bool isPow(int n)
{
    if(n==0)
        return false;
    while(n!=1)
    {
        if(n%2!=0)  // If no is odd return false
            return false;
        n=n/2;
    }
    return true;
}
int main()
{
    cout<<isPow(16);
    return 0;
}