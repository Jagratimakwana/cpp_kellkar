#include<stdio.h>
// monitor data type

class Monitor{
    public:
    Monitor & operator<<(int s){
        printf("%d", s);
        return *(this);    
        }
    Monitor & operator<<(float s){
        printf("float");
        printf("%f", s);
        return *(this);
    }
    Monitor & operator<<(double s){
        printf("double");
        printf("%f", s);
        return *(this);
    }
    Monitor & operator<<(const char *s){
        printf("%s", s);
        return *(this);
    }
    Monitor & operator<<(void(*p)()){
        p();
        return *this;
    }
};
namespace ThinkingMachine{
    void newline(){
        printf("\n");
    }
    Monitor mout;
}
using namespace ThinkingMachine;
int main(){
    //overloading insertion operator
    mout<<10<<newline<<5.973<<newline<<34.3f<<newline<<"d";
    return 0;
}