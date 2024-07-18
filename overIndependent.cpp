 // overloading through independent function
 #include<stdio.h>
 #include<iostream>
 using namespace std;
class Fridge;
 class Tv{
    int price;
    public:
    void setPrice(int price){
        this->price = price;
    }
    int getPrice(){
        return this->price;
    }
    friend int operator<(Tv &, Fridge &);
    friend ostream & operator<<(ostream &, Tv &);
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
    friend int operator<(Tv &, Fridge &);
    friend ostream & operator<<(ostream &, Fridge &);
 };
 int operator<(Tv &t, Fridge &f){
    return t.price<f.price;
 }
 ostream & operator<<(ostream &o, Tv &t){
    o<<t.price;
    return o;
 }
  ostream & operator<<(ostream &o, Fridge &f){
    o<<f.price;
    return o;
 }
int main(){
    Tv t;
    Fridge f;
    t.setPrice(4000);
    f.setPrice(3532);
    if(t<f)
    printf("price of Tv is %d is less than price of fridge %d\n",t.getPrice(), f.getPrice());
    else
    printf("price of Tv is %d is  not less than price of fridge %d\n",t.getPrice(), f.getPrice());
    cout<<"Price of TV : "<<t <<endl;
    cout<<"Price of Fridge : "<<f <<endl;
    return 0;
}