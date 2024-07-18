#include<stdio.h>
namespace sales{
    int numberOfTransaction = 100;
    int getTransactionAmount(){
        return 1000;
    }
}
namespace purchase{
    int numberOfTransaction = 200;
    int getTransactionAmount(){
        return 2000;
    }
}
using namespace sales;
int main(){
    printf("%d\n", getTransactionAmount());
    printf("%d\n", getTransactionAmount());
    printf("%d\n", numberOfTransaction);
    printf("%d\n", numberOfTransaction);
    return 0;
}