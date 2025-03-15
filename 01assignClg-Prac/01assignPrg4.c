/*WAP to interchange value of two variables using pointer*/
#include <stdio.h>
int main(){
    int num1,num2;
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    printf("Enter the number 1 to interchange value : ");
    scanf("%d",ptr1);
    printf("Enter the number 2 to interchange value : ");
    scanf("%d",ptr2);

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("Entered number are interchanged %d is num1 and %d is num2",*ptr1,*ptr2);
    return 0;
}