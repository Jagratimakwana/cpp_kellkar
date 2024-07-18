#include<iostream>
using namespace std;
class aaa
{
private:
//int x;
protected:
int y;
public:
int z;
};
/*class bbb
{

public:
    void sam(){
        aaa a;
        a.x =34;
        a.y = 44;
        a.z = 53;
    }
};*/
class ccc:protected aaa
{
private:
    /* data */
public:
    void joy()
    {
       // x=43;
    
        y=43;
        z=53;
        cout<<y<<endl<<z<<endl;
    }
};
class ddd:public ccc
{
public:
void yis(){
    cout<<"print value "<<y<<z<<endl;
}
};



int main()
{
    ccc c;
    c.joy();
    ddd d;
    d.joy();
    d.yis();
    return 0;
}




