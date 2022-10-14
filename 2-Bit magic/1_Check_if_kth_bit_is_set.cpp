#include <iostream>
using namespace std;
// Method 1:-->
// void checkKthBit(int n,int k)
// {
//     if(n&(1<<(k-1)==0))
//          cout<<("Yes")<<endl;
//     cout<<"No"<<endl;

// }

// Method 2 :-->

void checkKthBit(int n,int k)
{
    if(( n>> (k-1)) & 1)
        cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}


int main()
{
    checkKthBit(5,1);
    return 0;
}