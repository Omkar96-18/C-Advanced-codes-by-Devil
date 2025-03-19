/*WAP to accept n numbers and siplay the array in the reverse order.Using seperate functions to accept and display using pointer*/
#include<stdio.h>
void acceptInts(int *ptr, int num){
    for( int i = 0 ; i < num ; i++){
        printf("Enter the value for element no. %d : ",i + 1);
        scanf("%d", ptr + i);
    }
}
void displayRevints(int *ptr, int num){
    for( int i = num - 1 ; i >= 0 ; --i){
        printf("  %d   ",*(ptr + i));
    }
}
int main(){
    int num;
    printf("Enter the number of elements in an array : ");
    scanf("%d",&num);

    int arr[num];
    int *ptr = arr;

    acceptInts(ptr, num);
    displayRevints(ptr, num);

    return 0;
}