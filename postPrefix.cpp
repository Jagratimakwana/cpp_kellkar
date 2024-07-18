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
    void operator++(){
        this->price = this->price+ 20;
    }
    void operator+=(int x){
        this->price = this->price+x;
    }

    //operator overloading
    operator int(){
        return this->price;
    }
    friend int operator+(int,Toy &);
};
int operator+(int x, Toy &t){
    return x+t.price;
}
int main(){
    Toy t1,t2;
     int x=50;
    t1.setPrice(200);
    t2.setPrice(300);
    cout<<t1.getPrice()<<endl;
    cout<<t2.getPrice()<<endl;

    t1++;
    ++t2;
    cout<<t1.getPrice()<<endl;
    cout<<t2.getPrice()<<endl;

    t1+=400;
    cout<<t1.getPrice()<<endl;

    int sum = x+t1;
    cout<<sum<<endl;
   int y = x+t1;
    cout<<y;
        return 0;
}