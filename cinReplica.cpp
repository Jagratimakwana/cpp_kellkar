#include<iostream>
namespace ThinkingMachine{
    class keyboard{
        public:
        keyboard & operator>>(int &j){
            scanf("%d",&j);
            return *this;
        }
        keyboard & operator>>(float &f){
            scanf("%f", &f);
            return *this;
        }
        keyboard & operator>>(char &f){
            scanf("%s", f);
            return *this;
        }
    };
    keyboard kin;
}
using namespace ThinkingMachine;
int main(){
    int x;
    // overloading extraction operator
     kin>>x;
     printf("%d",x);
    return 0;
}