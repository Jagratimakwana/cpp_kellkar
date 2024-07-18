#include<iostream>
using namespace std;
class Bulb
{
private:
    int w;
public:
    Bulb(int e=0){
        w=e;
    }
    void setWattage(int e){
        w = e;
    }
    int getWattage()
    {
        return w;
    }
};
int main(){
    Bulb g;
    Bulb t(43);
      cout<<g.getWattage()<<endl;
   cout<<t.getWattage()<<endl;
}
 
