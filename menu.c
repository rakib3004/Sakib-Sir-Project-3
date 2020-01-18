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
void menu(){
system("cls");
    printf("\n\n\t\t\t\t============================\n\t\t\t\tSTUDENTS' PROFILES OF IITDU\n\t\t\t\t============================\n\n\n");
    int n;
    printf("1. Update students' prfiles\n");
    printf("2. View all students' profile\n");
    printf("3. View selected student(s)' profile(s)\n");
    printf("4. Calculate result\n");
    printf("5. Search student\n");
    printf("\n0. EXIT");
    printf("\n\n\nEnter your choice: ");

    scanf("%d",&n);

    if(n==2){
        print_full_profile();
        clears();
    }
    else if(n==3){
        find_student();
        clears();
    }
    else if(n==4){
        cgpa();
        clears();
    }
    else if(n==5){
        searchs();
    }
    else if(n==1){
        input_students_profile();
        clears();
    }
    else if(n==0){
        thanks();
    }
    else{
        printf("\n\nThe full data set is not ready yet.\n Thank you for your patience\n\n");
    }



return;


}
