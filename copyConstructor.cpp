#include<iostream>
using namespace std;
class Bulb{
int w;
public:
Bulb(){
    w=0; // g ka w
}
Bulb(int e){
    w=e; // t ka w
}
Bulb(const Bulb &v){
    w=v.w;  //m ka w,     v.w = t.w
}  
void setWattage(int e){
    w = e;
}
int getWattage(){
    return w;
}
};

int main(){
    Bulb g;
    Bulb t(60);
    Bulb m(t);
    cout<<g.getWattage()<<endl;
    cout<<t.getWattage()<<endl;
    cout<<m.getWattage()<<endl;
    return 0;
}