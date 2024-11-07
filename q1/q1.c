#include <stdio.h>

int main(){
    
    //Month 
    int month_days = 0;
    printf("Enter number of days in month: ");
    scanf("%d", &month_days);
    
    //NOTE: EDGE CASE #1
    if(!(month_days==30 || month_days==31)){
        printf("Invalid Days...");
        return 1;
    }

    //Start Day
    int start_day = 0;
    printf("Enter starting day of the week (1-Sun, 7-Sat): ");
    scanf("%d", &start_day);
    
    //NOTE: EDGE CASE #2
    if(!(start_day>=1 || start_day<=7)){
        printf("Invalid Start Date...");
        return 2;
    }

    //Days of the week header
    printf("Sun Mon Tue Wed Thu Fri Sat\n");
    

    //Printing the number sequence
    for(int i=1; i<start_day; i++){
        printf("    ");
    }

    for(int i=1; i<=month_days; i++){
        printf("%4d", i);

        if ((start_day + i - 1) %7 == 0){
            printf("\n");
        }
    }
    
    return 0;
}
