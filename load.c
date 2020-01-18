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

void load(){

    FILE *ptr=fopen("profiles.txt","r");
    int i;
    for( i=0;i<140;i++){

            fgets(s[i].roll,11,ptr);
            s[i].roll[strlen(s[i].roll)-1]='\0';
            fgets(s[i].name,24,ptr);
            s[i].name[strlen(s[i].name)-1]='\0';
            fgets(s[i].address,83,ptr);
            s[i].address[strlen(s[i].address)-1]='\0';
            fgets(s[i].regno,10,ptr);
            s[i].regno[strlen(s[i].regno)-1]='\0';

    }

}
