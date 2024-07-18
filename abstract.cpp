#include<iostream>
using namespace std;
class car{
    public:
    //if a class contain pure virtal function ,then  the class is treated as an abstract class
    virtual void manul()=0;
};
class ServiceStation{
    public:
    void doService(car *c){
        c->manul();
    }
};
class Hondacity
{
public:
    void manul(){
        cout<<"hondaCity information"<<endl;
    }
};
int main(){
    ServiceStation ss;
    Hondacity h;
    ss.doService(&h);
    // int ch;
    // car *c;
    // cout<<"1. Maruti"<<endl;
    // cout<<"2. HondaCity"<<endl;
    // cout<<"Enter your choice : ";
    // cin>>ch;
    // if(ch >= 1 && ch <= 2 )
    // {
    //     if(ch==1){
    //         c = new Maruti800;
    //     }
    //     else if(ch ==2){
    //         c = new Hondacity;
    //     }
    //     c->manul();
    // }
    // else cout<<"wrong choice";
    return 0;
}