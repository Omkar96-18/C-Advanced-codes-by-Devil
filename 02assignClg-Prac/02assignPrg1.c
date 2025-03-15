/*WAP to swap value of two variables using pointer*/
#include <stdio.h>
void swapVal(int *ptr1,int *ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main(){
    int num1,num2;
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    printf("Enter the number 1 to swap variables : ");
    scanf("%d",&num1);
    printf("Enter the number 2 to swap variables : ");
    scanf("%d",&num2);

    swapVal(ptr1, ptr2);
    printf("Swap Values are %d for num1 and %d for num2",*ptr1,*ptr2);
    return 0;
}