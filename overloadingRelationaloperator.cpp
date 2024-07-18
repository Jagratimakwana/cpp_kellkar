#include<stdio.h>
  // operator overloading through member function
class Bulb{
    private:
    int price;
    int wattage;
    public:
    void setWattage(int wattage){
        this->wattage = wattage;
    }
    void setPrice(int price){
        this->price = price;
    }
    int getPrice(){
        return this->price;
    }
    int getWattage(){
      return this->wattage;
    }
    int operator<(Bulb &v){
        return this->price < v.price;
    }
};
int main(){
    Bulb g,t;
    g.setPrice(300);
    t.setPrice(540);
    g.setWattage(220);
    t.setWattage(139);
    // overloading relation operator <, >, <<, >>, <=, >=, ==, !=
    if(g<t){
        printf("price of t is  %d is not cheaper than price of g is %d",t.getPrice(),g.getPrice());
    }
    else 
    printf("t is cheaper than g");
    return 0;
}