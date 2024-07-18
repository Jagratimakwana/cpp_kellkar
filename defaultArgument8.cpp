#include<iostream>
using namespace std;
void add(int p,int q, int r =0){
    cout<<"Total : "<<(p+q+r)<<endl;
}
int main(){
    add(10,20,30);
    add(100,20);
    return 0;
}