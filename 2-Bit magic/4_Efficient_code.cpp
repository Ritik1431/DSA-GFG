#include <iostream>
using namespace std;
bool isPow2(int n)
{
    return (n!=0) && (n&(n-1)==0);
}
int main()
{
    cout<<isPow2(4);
    return 0;
}