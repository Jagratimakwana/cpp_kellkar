#include<iostream>
using namespace std;
class Piggybank{
    int amount;
    public:
    Piggybank();
    Piggybank(int amount);
    int getAmount();
    Piggybank operator+(Piggybank &other);
};
    Piggybank::Piggybank()
    {
        this->amount =0;
    }
    Piggybank::Piggybank(int amount){
        this->amount=amount;
    }
    int Piggybank::getAmount(){
        return this->amount;
    }
    Piggybank Piggybank::operator+(Piggybank &other){
        int total = this->amount+other.amount;
        return Piggybank(total);
    }
    
    int main(){
        Piggybank b1(100);
        Piggybank b2(200),b3;
        b3 = b1+b2;
        cout<<b1.getAmount()<<endl;
        cout<<b2.getAmount()<<endl;
        cout<<b3.getAmount()<<endl;
        return 0;
    }