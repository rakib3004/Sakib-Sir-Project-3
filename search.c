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

void searchs(){
    clears();

    char search[25];
    int countname[140],countroll[140],countreg[140],countadd[140];
    printf("\n\n\t\t\t\tMAKE YOUR SEARCH\n\t\t\t_______________");
    printf("\n\n\t\t\tLook for:   ");
    fflush(stdin);
    fgets(search,25,stdin);
    search[strlen(search)-1]='\0';

    printf("\n\n\n\t\tSearching");
    Sleep(100);
    printf(". . ");
    Sleep(300);
    printf(". . . . ");
    Sleep(700);
    printf(". . . . .");
    Sleep(700);
    clears();
    printf("\n\n\n\tSearch Result(s):");
         int i,j,k;
    for( i=0;i<140;i++){
            countadd[i]=0;
            countname[i]=0;
            countreg[i]=0;
            countroll[i]=0;
        for( j=0;j<strlen(search);j++){
            /*for(int k=0;k<25;k++){
                if(s[i].name[k]==search[j]){
                    countname[i]++;
                }
                if(s[i].address[k]==search[j]){
                    countadd[i]++;
                }
                if(s[i].roll[k]==search[j]){
                    countroll[i]++;
                }
                if(s[i].regno[k]==search[j]){
                    countreg[i]++;
                }
            }*/

            for( k=0,j=0;k<strlen(s[i].name);k++){
                if(s[i].name[k]==search[j]){
                    countname[i]++;
                    while(s[i].name[k]==search[j]){

                    }
                }
                else{break;}
            }
            for( k=0,j=0;k<strlen(s[i].roll);k++){
                if(s[i].roll[k]==search[j]){
                    countroll[i]++;
                    j++;
                }
                else{break;}
            }
            for( k=0,j=0;k<strlen(s[i].regno);k++){
                if(s[i].regno[k]==search[j]){
                    countreg[i]++;
                    j++;
                }
                else{break;}
            }
            for( k=0,j=0;k<strlen(s[i].address);k++){
                if(s[i].address[k]==search[j]){
                    countadd[i]++;
                    j++;
                }
                else{break;}
            }
        }
    }
     printf("\n\n ROLL\t   NAME\t\t\t    ADDRESS\t\t\t\t\t\t\t\t\t\t\tREG no.\n");
printf("%d",countname[5]);
    for( i=0;i<140;i++){
        if(countname[i]>7||countroll[i]>7||countreg[i]>7||countadd[i]>7){
            printf(" %-11s",s[i].roll);
            printf("%-25s",s[i].name);
            printf("%-80s",s[i].address);
            printf("%s\n",s[i].regno);
            continue;
        }
        if(countname[i]>6||countroll[i]>6||countreg[i]>6||countadd[i]>6){
            printf(" %-11s",s[i].roll);
            printf("%-25s",s[i].name);
            printf("%-80s",s[i].address);
            printf("%s\n",s[i].regno);
            continue;
        }
        if(countname[i]>5||countroll[i]>5||countreg[i]>5||countadd[i]>5){
            printf(" %-11s",s[i].roll);
            printf("%-25s",s[i].name);
            printf("%-80s",s[i].address);
            printf("%s\n",s[i].regno);
            continue;
        }if(countname[i]>4||countroll[i]>4||countreg[i]>4||countadd[i]>4){
            printf(" %-11s",s[i].roll);
            printf("%-25s",s[i].name);
            printf("%-80s",s[i].address);
            printf("%s\n",s[i].regno);
            continue;
        }
        if(countname[i]>3||countroll[i]>3||countreg[i]>3||countadd[i]>3){
            printf(" %-11s",s[i].roll);
            printf("%-25s",s[i].name);
            printf("%-80s",s[i].address);
            printf("%s\n",s[i].regno);
            continue;
        }
        if(countname[i]>2||countroll[i]>2||countreg[i]>2||countadd[i]>2){
            printf(" %-11s",s[i].roll);
            printf("%-25s",s[i].name);
            printf("%-80s",s[i].address);
            printf("%s\n",s[i].regno);
            continue;
        }
        if(countname[i]>=1||countroll[i]>=1||countreg[i]>=1||countadd[i]>=1){
            printf(" %-11s",s[i].roll);
            printf("%-25s",s[i].name);
            printf("%-80s",s[i].address);
            printf("%s\n",s[i].regno);
            continue;
        }
    }

}
