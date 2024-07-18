#include<iostream>
using namespace std;
class Buld{
    int w;
    public:
    void setWattage(int w){
        this->w = w;
    }
    int getWattage(){
        return w;
    }
};
int main(){
    Buld b;
    b.setWattage(43);
    cout<<b.getWattage();
    return 0;
}