#include<iostream>
using namespace std;
class Fridge;
class Fan;
class Tv{
    int price;
    public:
    void setPrice(int price){
        this->price = price;
    }
    int getPrice(){
        return this->price;
    }
};
class Fridge{
    int price;
    public:
    void setPrice(int price){
        this->price = price;
    }
    int getPrice(){
        return this->price;
    }
};
class Fan{
    int price;
    public:
    void setPrice(int price){
        this->price = price;
    }
    int getPrice(){
        return this->price;
    }
};
int operator+(Fan &t, Fridge &f){
    return t.getPrice()+f.getPrice();
}
int operator+(int &x, Tv &f){
    return x+f.getPrice();
}
int main(){
    Tv t;
    t.setPrice(400);
    Fridge f;
    f.setPrice(500);
    Fan ff;
    ff.setPrice(600);
    int sum;
    sum = ff+f+t;
    cout<<sum;
    return 0;
}

