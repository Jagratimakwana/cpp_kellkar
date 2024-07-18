#include<iostream>
#include<string.h>
using namespace std;
class Book{
    private:
    char title[36];
    public:
    void setTitle(const char *t){
        if(strlen(t) > 35) title[0]='\0';
        else strcpy(title,t);
    }
    void getTitle(char *tt){
        strcpy(tt,title);
    }
};
int main(){
    char tt[36];
    Book k;
    k.setTitle("the world is around the foot");
    k.getTitle(tt);
    cout<<tt<<endl;
    return 0;
}