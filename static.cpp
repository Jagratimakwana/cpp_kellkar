#include<iostream>
using namespace std;
class Bulb
{
    private:
    int w;
    static int p;
public:
    void setprice(int s){
        p = s;
    }
    void sam(){
        cout<<"normal function"<<endl;
    }
    static void tom(){
         cout<<"static function"<<endl;
    }
    
};
int Bulb::p;
int main(){
    Bulb a,*p;//pointer to an object
    (*p).sam();
    p->sam();
    p->tom();
    a.setprice(43);
   Bulb::tom();

   int x;
   cout<<&x<<endl;
   cout<<(unsigned int)&x<<endl;
   x = 0x41; // ox -> octal value
   cout<<x<<endl;
   x = 041;  // 0 -> decimal value
   cout<<x<<endl;
   x= 0b1001;  // 0b -> binary value
   cout<<x<<endl;


   int *pointer,y,total,req;
   cout<<"Enter requirement";
   cin>>req;
   if(req<=0) {
    cout<<"Invalid requiremetn";
    return 0;
   }
   pointer = new int[req];
   y=0;
   while(y<req){
    cout<<"enter a number";
    cin>>*(pointer+y);
    y++;
   }
   y=0;
   total=0;
   while (y<req)
   {
    total += *(pointer+y);
    y++;
    /* code */
   }
   cout<<"total : "<<total;

   delete []pointer;
    return 0;
}


