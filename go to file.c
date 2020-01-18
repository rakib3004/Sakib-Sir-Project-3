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

 void go_to_file(){

     FILE *ptr=fopen("profiles.txt","w");
         int i;
     for( i=0;i<140;i++){
        fflush(stdin);
        fprintf(ptr,"%s\n",s[i].roll);
        fprintf(ptr,"%s\n",s[i].name);
        fprintf(ptr,"%s\n",s[i].address);
        fprintf(ptr,"%s\n",s[i].regno);
        fflush(stdin);
     }
    fclose(ptr);
 }
