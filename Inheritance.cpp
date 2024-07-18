//will not complie
#include<iostream>
using namespace std;
class Rectangle{// rectangle has 6 member
    int length;
    int breadth;
    public:
    void setLength(int e){
        length =e;
    }
    int getlength(){
        return length;
    }
    void setBreadth(int e){
        breath =e;
    }
    int getBreadth(){
        return breadth;
    }
};
// box has 9 member
class Box:private Rectangle
{
private:
    int height;
public:
   void setHeight(int e){
        height =e;
    }
    int getHeight(){
        return height;
    }
};

int main()
{
    Box x;
    /*x.length = 10;
    x.breath = 20;
    x.height = 30;*/
    x.setLength(10);
    x.setBreadth(20);
    x.setHeight(30);
    cout<<"Length : "<<x.getlength()<<endl;
    cout<<"Breath : "<<x.getBreadth()<<endl;
    cout<<"Height : "<<x.getHeight()<<endl;
    cout<<"Length : "<<x.getlength()<<endl;
    cout<<"Breath : "<<x.getBreadth()<<endl;
    cout<<"Height : "<<x.getHeight()<<endl;
}
