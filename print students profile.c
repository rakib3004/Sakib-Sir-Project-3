#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include "test.h"

struct student{
                    char name[24];
                    char address[83];
                    char roll[11];
                    char regno[10];
                    }s[140];

void print_full_profile(){
    clears();

    printf("\n\n\t\t\t\t\tSTUDENTS of IITDU\n\t\t\t\t________________________________\n\t\t\t\t================================\n\n\n");

            printf(" ROLL\t    NAME\t\t     ADDRESS\t\t\t\t\t\t\t\t\t\t    REG no\n============================================================================================================================\n");
                  int i;
            for( i=0;i<140;i++){

            printf(" %-11s",s[i].roll);
            printf("%-25s",s[i].name);
            printf("%-79s",s[i].address);
            printf("%s\n",s[i].regno);
            }




    int n;
    printf("\n\n\t\tEnter 0 t return to main menu.\n\t\tAny key to exit: ");
    scanf("%d",&n);
    if(n==0){
        menu();
    }
    else{
        thanks();
    }
}
