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

void edit_a_data(){
    char roll_buff[11];
    printf("Enter the roll number of that stupid: ");
    scanf("%s",roll_buff);
    int i;
    for( i=0;i<140;i++){
        if(strcmp(roll_buff,s[i].roll)==0){
                fflush(stdin);
                printf("Input roll: ");
                scanf("%s",s[i].roll);
                fflush(stdin);
                printf("Input name: ");
                fgets(s[i].name,sizeof(s[i].name),stdin);
                s[i].name[strlen(s[i].name)-1]='\0';
                fflush(stdin);
                printf("Input address: ");
                fgets(s[i].address,sizeof(s[i].address),stdin);
                s[i].address[strlen(s[i].address)-1]='\0';
                fflush(stdin);
                printf("Input regno: ");
                fgets(s[i].regno,sizeof(s[i].regno),stdin);
                s[i].regno[strlen(s[i].regno)-1]='\0';

                fflush(stdin);
           }
    }
    go_to_file();
    int n;
    printf("\n\n\t\tEnter 0 to return to main menu.\n\t\tAny key to exit: ");
    scanf("%d",&n);
    if(n==0){
        menu();
    }
    else{
        thanks();
    }

}
