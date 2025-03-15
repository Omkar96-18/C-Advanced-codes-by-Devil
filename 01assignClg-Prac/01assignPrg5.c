/*WAP to sum of first 'n' numbers using pointers*/
#include <stdio.h>
int main(){
    int num;
    int *ptr = &num;
    printf("Enter the number to calculate sum of 'n' integers : ");
    scanf("%d",&num);
    int sum = 0;
    for(int i = 0 ; i <= num ; i++){
        sum += i;
    } 
    printf("The sum of all 'n' integers is %d",sum);
    return 0;
}