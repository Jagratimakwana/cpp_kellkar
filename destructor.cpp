#include<iostream>
using namespace std;
class aaa{
    public:
    aaa(){
        cout<<"base class default constructor"<<endl;
    }
    virtual ~aaa(){
        cout<<"Base class destructor"<<endl;
    }
};
 // void lem(){
//     aaa g,t,m;
//     cout<<"cool"<<endl;
// }
class bbb:public aaa{
    public:
    bbb(){
        cout<<"derived class default constructor"<<endl;
    }
    ~bbb(){
        cout<<"derived class destructor"<<endl;
    }
};
int main(){
    aaa *b;
    cout<<"cool"<<endl;
    b = new bbb;
    delete b;
    return 0;
}