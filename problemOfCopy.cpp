//Problem due to copy constructor provided by compliler
#include<iostream>
using namespace std;
class IntCollection{
    private:
    int *x;
    int size;
    public:

    IntCollection(int req){
        if(req>0){
          size = req;
          x = new int[size];  
        }
        else{     
            x = NULL;
            size = 0;
        }
    }
    IntCollection(const IntCollection &v){
        if(v.size == 0){
            x = NULL;
            size = 0;
        }
        else{
            size = v.size;
            x = new int[size];
            for(int i=0; i<size; i++){
                x[i] = v.x[i];
            }
        }
    }
    void acceptInput(){
        for(int i=0; i<size; i++){
            cout<<"Enter a number:";
            cin>>x[i];
        }
    }
    void printContent(){
        for(int i=0; i<size; i++){
            cout<<x[i]<<endl;
        }
    }
};
int main()
{
    IntCollection c1(5);
    c1.acceptInput();
    cout<<"Print contents of c1 : "<<endl;
    c1.printContent();
    IntCollection c2(c1);
   // c2.acceptInput();
    cout<<"Print contents of c2 : "<<endl;
    c2.printContent();
     cout<<"Print contents of c1 : "<<endl;
    c1.printContent();

    return 0;
}