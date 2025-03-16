/*WAP to print fibbonacci series tilled 'n' integers using separate function*/
#include <stdio.h>
void fibbonacciNum(int *num){
    int t1 = 0;
    int t2 = 1;
    for(int i = 0 ; i < *num ; i++){
        printf("%d  ", t1);
        int temp = t1;
        t1 = t2;
        t2 = temp + t1;
    }
}
int main(){
    int num;

    printf("Enter the number to print further fibbonacci numbers :");
    scanf("%d",&num);
    
    fibbonacciNum(&num);
    return 0;
}