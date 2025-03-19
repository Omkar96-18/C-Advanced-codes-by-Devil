/*WAF to accept n numbers and store all prime numbers in an array called prime. Display this array uisng pointer*/
#include <stdio.h>
void storedNums(int *ptr, int num){
    for(int i = 0 ; i < num ; i++){
        printf("Enter the number for element no. %d : ",i + 1);
        scanf("%d", ptr + i);
    }
}
void primeNums(int *ptr, int num, int *ptr2, int *pCnt){
    for (int i = 0 ; i < num ; i++){
        int flag = 0;
        if (*(ptr + i) <= 1) {
            continue; 
        }
        for (int j = 2 ; j * j <= *(ptr + i) ; j++){
            if(*(ptr + i) % j == 0){
                flag = 1;     
                break;
            }
        }
        if(flag == 0){       
            *(ptr2 + *pCnt) = *(ptr + i);
            (*pCnt)++;
        }
    }
}
void displayPrime(int *ptr2, int pCnt){
    printf("The all prime are : \n");
    for(int i = 0 ; i < pCnt ; i++){
        printf("  %d  ", *(ptr2 + i));
    }
}
int main(){
    int num;
    printf("Enter the number of elements in an array : ");
    scanf("%d", &num);

    int arr[num];
    int *ptr = arr;

    int prime[num];
    int *ptr2 = prime;
    int pCnt = 0;

    storedNums(ptr, num);
    primeNums(ptr, num, ptr2, &pCnt);
    displayPrime(ptr2 ,pCnt);

    return 0;
}