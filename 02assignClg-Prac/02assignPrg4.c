/*WAP to accepts hrs, mins, secs and increment seconds from user and display the incremented time using separarte function */
#include <stdio.h>
void getInctime(int *hrs, int *mins, int *secs, int *incSec){
    int tot_calSec = 0;
    tot_calSec = (*hrs * 3600) + (*mins * 60) + *secs + *incSec;

    *hrs = (tot_calSec / 3600) % 24;
    *mins = (tot_calSec / 60) % 60;
    *secs = tot_calSec % 60;
}
int main(){
    int hrs, mins, secs;
    printf("Enter the hours : ");
    scanf("%d",&hrs);

    printf("Enter the minutes : ");
    scanf("%d",&mins);

    printf("Enter the seconds : ");
    scanf("%d",&secs);

    int incSec;
    printf("Enter the time in seconds to need to increment : ");
    scanf("%d", &incSec);

    getInctime(&hrs, &mins, &secs, &incSec);

    printf("The updated hrs : %d\nThe updated mins : %d\nThe updated secs : %d",hrs ,mins, secs);
}