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
void find_student(){
    clears();
    printf("\n\n\t\t\t\tSTUDENTS' PROFILES OF IITDU\n\t\t\t\t============================\n\t\t\t\t============================\n\n\n");
    int n;
    char a[3],b[3],temp[10];
    printf(" 1. View students' infos batch-wise");
    printf("\n 2. View a specific student's information");
    printf("\n\n 0. Main menu");
    printf("\n\nEnter your choice: ");

    scanf("%d",&n);
    clears();
    if(n==0){
        menu();
    }

    else if(n==1){
        printf("\n\n  Please provide the batch serial number(int two digits): ");
        printf("\n  Enter 'X' to back\n\n");
        scanf("%s",a);
        if(a[0]=='X'||a[0]=='x'){
            find_student();
        }

        printf(" ROLL\t   NAME\t\t\t    ADDRESS\t\t\t\t\t\t\t\t\t\t\tREG no.\n");
             int i;
        for( i=0;i<140;i++){
                strcpy(temp,s[i].roll);
            b[0]=temp[4];b[1]=temp[5];b[2]='\0';
            if(strcmp(b,a)==0){
            printf(" %-11s",s[i].roll);
            printf("%-25s",s[i].name);
            printf("%-80s",s[i].address);
            printf("%s\n",s[i].regno);
            fflush(stdin);
            temp[4]='\0';temp[5]='\0';
                }
        }

    }

    else if(n==2){
        printf("\n\n  Please provide the roll number of the student: ");
        printf("\n\n  X. Back\n\n\n");

        scanf("%s",temp);

        if(temp[0]=='X'||temp[0]=='x'){
            find_student();
        }

        temp[8]='\0';

        printf(" ROLL\t   NAME\t\t\t    ADDRESS\t\t\t\t\t\t\t\t\t\t\tREG no.\n");
              int i;
        for( i=0;i<140;i++){
                if(strcmp(temp,s[i].roll)==0){
            fflush(stdin);
            printf(" %-11s",s[i].roll);
            printf("%-25s",s[i].name);
            printf("%-80s",s[i].address);
            printf("%s\n",s[i].regno);
            fflush(stdin);
                }
        }
        }

        int k;
    printf("\n\n\t\tEnter 0 to return to main menu\n\t\tEnter 1 to back to specific viewing");
    printf("\n\t\tAny key to exit: ");
    scanf("%d",&k);
    if(k==1){
        find_student();
    }
    else if(k==0){
        menu();
    }
    else{
        thanks();
    }
}
