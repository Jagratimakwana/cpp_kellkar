#include<iostream>
using namespace std;
class Toy{
    private:
    int price;
    public:
    void setPrice(int price)
    {
        this->price = price;
    }
    int getPrice(){
        return price;
    }
    void operator++(int){
        this->price = this->price+ 40;
    }