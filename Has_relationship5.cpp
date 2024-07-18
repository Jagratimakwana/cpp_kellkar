#include<iostream>
#include<string.h>
using namespace std;

class SDCard{
private:
int capacity;
public:
void SetCapacity(int c){
    capacity=c;
}
int GetCapacity(){
    return capacity;
}
};
 class MobilePhone
 {
 private:
   char brandName[36];
   int price;
   SDCard sdcard;
 public:
    void SetBrandName(const char *b){
        strcpy(brandName, b);
    }
    void GetBrandName(char *b){
        strcpy(b, brandName);
    }
    void SetPrice(int p){
        price=p;
    }
    int GetPrice(){
        return price;
    }
    void SetSDcard(SDCard s){
        sdcard = s;
    }
    SDCard GetSDcard(){
        return sdcard;
    }
 };
 
 int main(){
    MobilePhone m;
    m.SetBrandName("Nokia");
    m.SetPrice(4600);
    SDCard ss;
    ss.SetCapacity(64);
    m.SetSDcard(ss);
    char br[36];
    m.GetBrandName(br);
    int pr;
    pr = m.GetPrice();
    SDCard kk = m.GetSDcard();
    cout<<"---Mobile Details---"<<endl;
    cout<<"Brand : "<<br<<endl;
    cout<<"Price : "<<pr<<endl;
    cout<<"Capacity of SDcard in mobile :"<<kk.GetCapacity()<<endl;    
    return 0;
 }
 
