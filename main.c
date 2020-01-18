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

int main()
{
    load();
    printf("\n\n\t\t\t\t\t<*** WELCOME ***>\n\n");

    printf("\t\tPress ENTER to continue to Students' Profiles of IITDU...");
    getchar();
    menu();
    return 0;
}
