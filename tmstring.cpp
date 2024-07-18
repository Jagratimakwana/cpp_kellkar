#include<iostream>
#include<string.h>
using namespace  std;

class TMString{
    char *s;
    public:
    char * getString(){
        return this->s;
    }
    TMString & operator=(char *t){
        this->s = t;
        return *this;
    }
    friend ostream & operator<<(ostream &, TMString &);
    friend TMString & operator+(TMString &, TMString &);
};
TMString & operator+(TMString &t, TMString &s){
    return strcat(t.getString(), s.getString());
}
ostream & operator<<(ostream &o, TMString &t){
    o<<t.s<<endl;
}
int main()
{
    TMString t;
    t = "Ujjain";
    cout<<t<<endl;
    TMString s;
    s = "Radha";
    cout<<t<<endl;
    TMString h;
    h = t+s;
    cout<<t<<endl;


    return 0;
}
