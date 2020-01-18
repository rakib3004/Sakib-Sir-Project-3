#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "test.h"
#include<windows.h>

struct student{
                    char name[24];
                    char address[83];
                    char roll[11];
                    char regno[10];
                    }s[140];

void input_students_profile(){
    clears();
    printf("\n\n =================\n UPDATING PROFILES\n =================\n\n\n");

    int n;
    printf("\n\n1. Edit specific student's data\n2. Re-input whole data\n0. Return to main menu\n\n  Enter your choice: ");
    fflush(stdin);
    scanf("%d",&n);
    if(n==0){
        menu();
    }
    else if(n==1){
        edit_a_data();
    }
    else{

        clears();
         int i;
    for( i=0;i<140;i++){

        fflush(stdin);
        printf("\n\n  Input Roll: ");
        fgets(s[i].roll,sizeof(s[i].roll),stdin);
        s[i].roll[strlen(s[i].roll)-1]='\0';

        printf("\n  Input Name: ");
        fgets(s[i].name,sizeof(s[i].name),stdin);
        s[i].name[strlen(s[i].name)-1]='\0';

        printf("\n  Input Address: ");
        fgets(s[i].address,sizeof(s[i].address),stdin);
        s[i].address[strlen(s[i].address)-1]='\0';



        printf("\n  Input Registration no.: ");
        fgets(s[i].regno,sizeof(s[i].regno),stdin);
        s[i].regno[strlen(s[i].regno)-1]='\0';
        fflush(stdin);
        printf("\n\n  Entry successful\n\n");
        Sleep(1000);
        clears();
    }

    printf("\n  Profiles successfully updated\n");
    int k;
    printf("\n\n\tEnter 0 to return to main menu\n\t\tAny key to exit... ");
    scanf("%d",&k);
    if(k==0){
        menu();
    }
    else{
        thanks();
    }

    }
}
