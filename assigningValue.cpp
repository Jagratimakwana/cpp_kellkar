// //assigning value to the object at declaration time
// #include<iostream>
// using namespace std;
// class Bulb{
//     private:
//     int wattage;
//     public:
//     void setWattage(int w){
//         this->wattage = w;
//     }
//     int getWattage(){
//         return this->wattage;
//     }
//     Bulb(){
//         cout<<"Default constructor got invoked"<<endl;
//         this->wattage =0;
//     }
//     Bulb(int wattage){
//         cout<<"Parameterized constructor got invoked"<<endl;
//        this->wattage = wattage;
//     }
//     Bulb(const Bulb &v){
//         cout<<"Copy constructor got invoked"<<endl;
//         this->wattage = v.wattage;
//     }
//     Bulb & operator<<(const Bulb &v){
//         cout<<"Operator = got invoked"<<endl;
//         this->wattage = v.wattage;
//         return *this;
//     }
//     //  Bulb & operator=(Bulb &other){
//     //     cout<<"operator = got invoked with bulb parameter "<<endl;
//     //     this->wattage = other.wattage;
//     // }

//     // Bulb & operator=(int wattage){
//     //     cout<<"operator = got invoked"<<endl;
//     //     this->wattage = wattage;
//     // }
// };
// // void Bulb(int){
// //     cout<<"Function got called "<<endl;
// // }
//  int main(){
// //     Bulb b=60;
// //     Bulb m=b;
// //     cout<<b.getWattage()<<endl;

//     // Bulb m,j;
//     // j=m;

//     // Bulb k;
//     // k = 50;

//     // Bulb();
//     // Bulb(60);
    
//     Bulb k;
//     k=90;
//     return 0;
// }



