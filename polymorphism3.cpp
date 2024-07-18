#include<iostream>
using namespace std;
int add(int p, int q)
{
     return p+q;
}
int add(int p, int q, int r) 
{
    return p+q+r;
}
int main(){
    cout<<add(343,423)<<endl;
    cout<<add(343,423,50)<<endl;
    return 0;
}
