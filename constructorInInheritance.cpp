#include<iostream>
using namespace std;

class aaa{
    public:
    aaa(){
        cout<<"griengierg"<<endl;
    }
    
    
      /*aaa(int e){
        cout<<"base class parameterized constructor"<<endl;
     }*/
};
class bbb: public aaa
{
    public:
    bbb()
    {
        cout<<"derived class constructor"<<endl;    
    }
    bbb(int e){
        cout<<"derived class parameterized constructor"<<endl;
    }
    bbb(const bbb &h){
        cout<<"venvrugei"<<endl;
    }
   /* bbb():aaa(9)
    {
        cout<<"derived class constructor"<<endl;    
    }
    bbb(int e):aaa(9)
    {
        cout<<"derived class parameterized constructor"<<endl;
            }*/
};
int main(){
    bbb b;
    bbb v(b);
    return 0;
}


