#include<iostream>
using namespace std;
void callByReference(int &p)
{
    p = 1000;
}
int main()
{
    int x;
     x =54;
     cout<<"value of x is :"<<x<<endl;
    callByReference(x);
     cout<<"value of x is :"<<x<<endl;
     cout<<x<<endl;
    return 0;
}