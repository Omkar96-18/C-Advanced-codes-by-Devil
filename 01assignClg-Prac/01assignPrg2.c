//WAP to read two integers using pointers and perform all arithmetic operations on them
#include <stdio.h>
int main() {
    int num1, num2;
    int *ptr1 = &num1; 
    int *ptr2 = &num2;  

    printf("Enter the number 1 to check maximum number of it: ");
    scanf("%d", ptr1);
    printf("Enter the number 2 to check maximum number of it: ");
    scanf("%d", ptr2);

    if (*ptr1 > *ptr2) {
        printf("The number %d is greater than number %d\n", *ptr1, *ptr2);
    } else if (*ptr1 < *ptr2) {
        printf("The number %d is greater than number %d\n", *ptr2, *ptr1);
    } else {
        printf("Both numbers are equal\n");
    }

    return 0;
}
