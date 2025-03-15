//WAP to accept an integer using pointer and check whether it is even or odd
#include<stdio.h>
int main(){
    int num;
    int *ptr = &num;

    printf("Enter the number to check whether it is Even or Odd : ");
    scanf("%d",ptr);

    if(*ptr % 2 == 0)
        printf("The given number %d is even",*ptr);
    else
        printf("The Entered number %d is odd",*ptr);
        
    return 0;
}