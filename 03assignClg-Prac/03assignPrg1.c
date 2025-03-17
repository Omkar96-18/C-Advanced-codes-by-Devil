/*WAP to accept 'n' integers in an array and display elements sum of array elements using pointer*/
#include <stdio.h>
int main(){
    int num;
    printf("Enter the number of elements in a list : ");
    scanf("%d",&num);

    int arr[num];
    int *ptr = arr;

    printf("Enter the value of elements for calculate sum of it : \n");
    for(int i = 0 ; i < num ; i++){
        printf("Enter the value for element no. %d :",i + 1);
        scanf("%d", ptr + i);
    }

    int sum = 0;
    for(int i = 0 ; i < num ; i++){
        sum += *(ptr + i);
    }

    printf("The sum of given elements of a list is : %d", sum);
    return 0;
}