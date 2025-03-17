/*WAP to accept 'n' integers in an array and display range of array elements using pointer*/
#include <stdio.h>
int main(){
    int num;
    printf("Enter the number of elements in a list : ");
    scanf("%d",&num);

    int arr[num];
    int *ptr = arr;

    printf("Enter the value of elements for calculate range of it : \n");
    for(int i = 0 ; i < num ; i++){
        printf("Enter the value for element no. %d :",i + 1);
        scanf("%d", ptr + i);
    }

    int min = *ptr;
    int max = *ptr;
    for(int i = 0 ; i < num ; i++){
        if(max < *(ptr + i)){
            max = *(ptr + i);
        }
        else if(max < *(ptr + i)){
            max = *(ptr + i);
        }
    }

    int range = max - min;
    printf("The range of given elements of an array is : %d", range);
    return 0;
}