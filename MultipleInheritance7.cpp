#include<iostream>
#include<string.h>
using namespace std;

class Person
{
private:
    char name[36];
public:
void setName(const char *b){
    strcpy(name,b);
}
void getName(char *b){
    strcpy(b,name);
}
};

class Employee{
    private: 
    int id;
    int salary;
    public:
    void setId(int n){
        id = n;
    }
    int getId()
    {
        return id;
    }
    void setSalary(int s){
        salary = s;
    }
    int getSalary(){
        return salary;
    }
};

class Doctor:public Person, public Employee{
    private:
    char type[36];
    public:
    void setType(const char *t){
        strcpy(type,t);
    } 
    void getType(char *t){
        strcpy(t,type);
    }
};

int main(){
    Doctor d;
    d.setName("Arora");
    d.setId(4352452);
    d.setSalary(72000);
    d.setType("Dentist");
    char n[36];
    d.getName(n);
    char t[36];
    d.getType(t);
    cout<<"---Employee Details---"<<endl;
    cout<<"Name : "<<n<<endl;
    cout<<"Type : "<<t<<endl;   
    cout<<"ID : "<<d.getId()<<endl;
     cout<<"Salary : "<<d.getSalary()<<endl;
}