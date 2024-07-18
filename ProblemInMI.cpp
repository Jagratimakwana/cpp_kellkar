
/*problem associated with Multiple Inheritance
 maim me sam() ki 2 copies phuch rhi h
 solution is virtual inheritance
 */


 #include<iostream>
using namespace std;
class aaa{
    public:
    void sam(){

    }
};
 class bbb:public aaa{
//1 sam() copy
 };
class ccc:public aaa, public bbb{
//1 sam() copy
};
int main(){
    ccc c;
    cout<<c.sam();
}