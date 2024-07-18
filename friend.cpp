#include<iostream>
//friend class and friend function
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
    friend int getTotalCost(Tv &, Fridge &);
    friend class calculator;
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
    friend int getTotalCost(Tv &, Fridge &);
        friend class calculator;
};
//friend class
class calculator{
    public:
    int getTotalCost(Tv &t, Fridge &f){
        
    cout<<"Class function"<<endl;
    return t.price+f.price;
    
}
int getCostDiff( Fridge &f,Tv &t){
    
    cout<<"Class function"<<endl;
    return f.price-t.price;
    
}
};

//friend function
int getTotalCost(Tv &t, Fridge &f){
    
    cout<<"function"<<endl;
    return t.price+f.price;
}
int main(){
    Tv t;
    Fridge f;
    t.setPrice(2);
    f.setPrice(4);
    calculator c;
    int total = getTotalCost(t,f);
    cout<<"Total : "<<total<<endl;
    cout<<"Total : "<<c.getTotalCost(t,f)<<endl;
    cout<<"Diffrence :  "<<c.getCostDiff(f,t)<<endl;
    return 0;
}
