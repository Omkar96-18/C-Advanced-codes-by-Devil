/*WAP to accept the number and check that Prime or Not in separate function*/
#include <stdio.h>
int primeFunc(int *ptr){
    int flag = 0;
    for(int i = 2 ; i * i <= *ptr; i++){
        if(*ptr % i == 0){
            flag = 1;
        }
    }
    if (flag == 0)
        return 1;
    else
        return 0;
}
int main(){
    int num;
    int *ptr = &num;

    printf("Enter the number to check whether Prime or not : ");
    scanf("%d", ptr);

    int res = primeFunc(ptr);

    if (res == 1)
        printf("The number %d is Prime",*ptr);
    else
        printf("The number %d is Not Prime",*ptr);
    return 0;
}