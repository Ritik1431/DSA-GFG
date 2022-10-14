#include <iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
    cout<<"0"<<endl;
        
    return n*fact(n-1);
    
}
int main()
{
    cout<<fact(5);
    return 0;
}