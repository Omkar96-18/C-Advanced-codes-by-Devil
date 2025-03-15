//WAP to read two integers using pointers and perform all arithmetic operation on them
#include <stdio.h>
int main(){
    int num1,num2;
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    printf("Enter the number 1 to do arithmetic operations : ");
    scanf("%d",ptr1);
    printf("Enter the number 2 to do arithmetic operations : ");
    scanf("%d",ptr2);

    int sum = *(ptr1) + *(ptr2);
    int diff = *(ptr1) - *(ptr2);
    int prod = *(ptr1) + *(ptr2);
    float quot = *(ptr1) / *(ptr2);
    
    printf("The sum of numbers is %d\n",sum);
    printf("The difference of numbers is %d\n",diff);
    printf("The product of numbers is %d\n",prod);
    printf("The quotient of numbers is %.2f\n",quot);
    return 0;
}