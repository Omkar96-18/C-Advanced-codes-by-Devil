/*WAP to accept a mantrix A of size m*n and display the element also and display the maximum element og matrix*/
#include <stdio.h>
int main(){
    int row,col;
    printf("Enter the number of row for the matrix :");
    scanf("%d",&row);
    printf("Enter the number of column for the matrix :");
    scanf("%d",&col);
    int ele[row][col];
    
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            printf("Enter the value for element no. [%d][%d] " ,i + 1, j + 1);
            scanf("%d", &ele[i][j]);
        }
    }
    int max = ele[0][0];
    printf("Entered Matrix is :\n ");
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            if(max < *(*(ele + i) + j)){
                max = *(*(ele + i) + j);
            }
            printf(" %d " ,*(*(ele + i) + j));
        }
        printf("\n");
    }
    printf("Maximum element of the matrix is %d",max);
}