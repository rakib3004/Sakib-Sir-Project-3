#include<cstdio>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

int menu();
int sub_menu();
int profile();
int view();
int marks_processing();
int marks_processing2();

int result();
int semester_wise_mark();
int semester01();
int semester02();
int semester03();
int semester04();
int semester05();
int semester06();
int semester07();
int semester08();
int enter_marks();
int intern_marks();
float cgpa_calculation();
float grand_cgpa_calculation();
char subject_code[8][6][14];
float cgpa;
float sub_cgpa[6];
int sub_marks;
float sem_cgpa;

 int sm_no;

int i;
int main()

{
    menu();

    return 0;
}
int menu()
{
    int c;
    printf("\t\t\t\t\t\t######\t######\t######\n");

    printf("\t\t\t\t\t\t  ##  \t  ##  \t  ##\n");

    printf("\t\t\t\t\t\t  ##  \t  ##  \t  ##\t\t\t--------------\n");

    printf("\t@professionalism\t\t\t  ##  \t  ##  \t  ##\t\t\t||University||\n");

    printf("\t@excellence\t\t\t\t  ##  \t  ##  \t  ##\t\t\t||of        ||\n");

    printf("\t@respect\t\t\t\t  ##  \t  ##  \t  ##\t\t\t||Dhaka     ||\n");

    printf("\t\t\t\t\t\t  ##  \t  ##  \t  ##\t\t\t--------------\n");

    printf("\t\t\t\t\t\t######\t######\t  ##\n");
    printf("\t\t\t\t\t\t====================\n") ;
    printf("\t\t\t\t\t\t++++++++++++++++++++\n") ;
    printf("\t\t\t\t\t\t====================\n") ;
    printf("\t\t\t\t\tInstitute_of_Information_Technology\n");
    printf("\t\t\t\t\t*********www.iit.du.ac.bd**********\n\n\n");
    printf("\t\t\tInstitute of Information Technology(IIt),University of Dhaka \n");
    printf("\t\t\toffers Bachelor of Software Engineering(BSSE) degree from 2009.\n");
    printf("\t\t\tThis is a four year Honors program which main vision is that to \n");
    printf("\t\t\tmake a student with professionalism,excellence & respect and \n");
    printf("\t\t\twill be a perfect software engineer for any software industry.\n\n\n");
    printf("\t\t\t\t\t===================\n");
    printf("\t\t\t\t\t#WELCOME TO IITSIS#\n");
    printf("\t\t\t\t\t===================\n");
    printf("\t\t\t\t  ''IIT Student Information System''\n\n");

   printf("\t\t1.Enter_Profile\t\t\t\t\t3.Enter_Marks\n");
   printf("\t\t2.View_Profile\t\t\t\t\t4.View_Marks\n");
   printf("\t\t\t\tEnter Your Choice>>>>>>>");
    scanf("%d",&c) ;
   getchar();





    if(c==1)
    {

        profile();


    }

    else if(c==2)
    {
        view();

    }
    else if(c==3)

    {

        marks_processing();
    }
    else if(c==4)
    {
        result();
    }

    else
    {
        printf("!!!!!!Wrong_Key!!!!!!");

    }

    printf("\n\n[1]---->continue\n");
    printf("[0]---->stop\n");
    printf("Enter[1 or 0]>>>>>");

    int bio;
           scanf("%d",&bio);
    if(bio==1)

    {
         sub_menu();

    }







    return 0;
}

int sub_menu()

{
     int c;
    printf("\n\n\n\t\t\t\t\t\t######\t######\t######\n");

    printf("\t\t\t\t\t\t  ##  \t  ##  \t  ##\n");

    printf("\t\t\t\t\t\t  ##  \t  ##  \t  ##\t\t\t--------------\n");

    printf("\t@professionalism\t\t\t  ##  \t  ##  \t  ##\t\t\t||University||\n");

    printf("\t@excellence\t\t\t\t  ##  \t  ##  \t  ##\t\t\t||of        ||\n");

    printf("\t@respect\t\t\t\t  ##  \t  ##  \t  ##\t\t\t||Dhaka     ||\n");

    printf("\t\t\t\t\t\t  ##  \t  ##  \t  ##\t\t\t--------------\n");

    printf("\t\t\t\t\t\t######\t######\t  ##\n");
    printf("\t\t\t\t\t\t====================\n") ;
    printf("\t\t\t\t\t\t++++++++++++++++++++\n") ;
    printf("\t\t\t\t\t\t====================\n") ;
    printf("\t\t\t\t\tInstitute_of_Information_Technology\n");
    printf("\t\t\t\t\t*********www.iit.du.ac.bd**********\n\n\n");

   printf("\t\t1.Enter_Profile\t\t\t\t\t3.Enter_Marks\n");
   printf("\t\t2.View_Profile\t\t\t\t\t4.View_Marks\n");
   printf("\t\t\t\tEnter Your Choice>>>>>>>");
    scanf("%d",&c) ;
   getchar();





    if(c==1)
    {

        profile();


    }

    else if(c==2)
    {
        view();

    }
    else if(c==3)

    {

        marks_processing();
    }
    else if(c==4)
    {
        result();
    }

    else
    {
       printf("!!!!!!Wrong_Key!!!!!!");

    }

    printf("\n\n[1]---->continue\n");
    printf("[0]---->stop\n");
    printf("Enter[1 or 0]>>>>>");

    int bio;
           scanf("%d",&bio);
    if(bio==1)

    {
      return   sub_menu();

    }


return 0;
}









int profile()
{
       int n;
           printf("how many iitian's profile you want to input:");

         scanf("%d",&n);
         getchar();
    FILE*ptr;
    struct number
    {


        char name[21];
        char address[80];
        int roll;
        char  du[10];

    } iitian[n];

    ptr=fopen("Student_information_database.txt","a+");



    for(i=0; i<n; i++)
    {


        printf("\niitian[%d] details\n\n",i+1);

            printf("iitian[%d].name\n",i+1);
          fgets(iitian[i].name,21,stdin);
        fprintf(ptr,"%s",iitian[i].name);



        printf("iitian[%d].address\n",i+1);
        fgets(iitian[i].address,80,stdin);
        fprintf(ptr,"%s",iitian[i].address);



        printf("iitian[%d].roll\n",i+1);
        fflush(stdin);
        scanf("%d",&iitian[i].roll);
        getchar();
        fprintf(ptr,"BSSE%d\n",iitian[i].roll);



       printf("iitian[%d].registration\n",i+1);
        fgets(iitian[i].du,10,stdin);
        fprintf(ptr,"%s",iitian[i].du);


        fprintf(ptr,"\n\n");

    }
    fclose(ptr);


    return 0;
}
int view()


{
    FILE *pt;

    char book[1700];
    pt=fopen("Student_information_database.txt","r");


    fread(book,1700,1,pt);
    printf("%s",book);
    fclose(pt);

    return 0;
}





int marks_processing()
{
          FILE *quality;
         char  bsse_roll[14];

          quality=fopen("Student_marks_database.txt","a+");

                    printf("Enter your roll no:\n");
                    scanf("%s",&bsse_roll);

                  fprintf(quality,"Students_roll_no: #%s\n",bsse_roll);

                 fclose(quality);
          semester_wise_mark();
    return 0;
}
int marks_processing2()
{



          semester_wise_mark();
    return 0;
}

int  semester_wise_mark()

{


      int option;
  printf("Enter the semester no:");
                   fflush(stdin);
                  scanf("%d",&sm_no);


                  if(sm_no==1)

                  {
                      semester01();
                      enter_marks();

                  }
                  else if (sm_no==2)
                  {

                      semester02();
                      enter_marks();
                  }
                  else if(sm_no==3)

                  {
                      semester03();
                      enter_marks();

                  }
                  else if(sm_no==4)

                  {
                      semester04();
                      enter_marks();
                  }
                else if(sm_no==5)

                {
                    semester05();
                    enter_marks();
                }
                else if(sm_no==6)

                {
                    semester06();
                    enter_marks();
                }
                else if(sm_no==7)

                {
                    semester07();
                    intern_marks();
                }
                else if(sm_no==8)

                {
                    semester08();
                    enter_marks();
                }
                else
                    {
                     printf("Thanks for entering Students number\n");
                     return 0;
                    }

                    printf("Press 1 for input next semester number\n");
                    printf("Press 2 for stop to input semester number\n");
                  scanf("%d",&option);

                  if(option==1)
                  {
                    marks_processing2();
                  }

                  else
                    {
        printf("Thanks for entering Students number\n");

                   return 0;


                    }
}


   int semester01()
   {
        strcpy(subject_code[0][0],"SE101");
        strcpy(subject_code[0][1],"SE102");
        strcpy(subject_code[0][2],"SE103");
        strcpy(subject_code[0][3],"SE104");
        strcpy(subject_code[0][4],"SE105");
        strcpy(subject_code[0][5],"SE106");


   }
   int semester02()
   {
       strcpy(subject_code[1][0],"SE201");
       strcpy(subject_code[1][1],"SE202");
       strcpy(subject_code[1][2],"SE203");
       strcpy(subject_code[1][3],"SE204");
       strcpy(subject_code[1][4],"SE205");
       strcpy(subject_code[1][5],"SE206");



   }
   int semester03()
   {
       strcpy(subject_code[2][0],"SE301");
       strcpy(subject_code[2][1],"SE302");
       strcpy(subject_code[2][2],"SE303");
       strcpy(subject_code[2][3],"SE304");
       strcpy(subject_code[2][4],"SE305");
       strcpy(subject_code[2][5],"SE306");


   }
   int semester04()
   {
       strcpy(subject_code[3][0],"SE401");
       strcpy(subject_code[3][1],"SE402");
       strcpy(subject_code[3][2],"SE403");
       strcpy(subject_code[3][3],"SE404");
       strcpy(subject_code[3][4],"SE405");
       strcpy(subject_code[3][5],"SE406");


   }
   int semester05()
   {
       strcpy(subject_code[4][0],"SE501");
       strcpy(subject_code[4][1],"SE502");
       strcpy(subject_code[4][2],"SE503");
       strcpy(subject_code[4][3],"SE504");
       strcpy(subject_code[4][4],"SE505");
       strcpy(subject_code[4][5],"SE506");


   }
   int semester06()
   {
       strcpy(subject_code[5][0],"SE601");
       strcpy(subject_code[5][1],"SE602");
       strcpy(subject_code[5][2],"SE603");
       strcpy(subject_code[5][3],"SE601");
       strcpy(subject_code[5][4],"SE601");
       strcpy(subject_code[5][5],"SE601");


   }
   int semester07()
   {
       strcpy(subject_code[6][0],"SE701");



   }
   int semester08()
   {
       strcpy(subject_code[7][0],"SE801");
       strcpy(subject_code[7][1],"SE802");
       strcpy(subject_code[7][2],"SE803");
       strcpy(subject_code[7][3],"SE804");
       strcpy(subject_code[7][4],"SE805");
       strcpy(subject_code[7][5],"SE806");


   }













int enter_marks()
{

FILE *tecnology;


for(i=0;i<6;i++)
{


    printf("The marks of %s:",subject_code[sm_no-1][i]);
    scanf("%d",&sub_marks);
   sub_cgpa[i]=cgpa_calculation();
   sem_cgpa=sem_cgpa+sub_cgpa[i];
}
sem_cgpa=sem_cgpa/6;

tecnology=fopen("Student_marks_database.txt","a+");
  fprintf(tecnology,"Semester0%d cgpa: %f\n",sm_no,sem_cgpa);



 fclose(tecnology);
return 0;
}

int intern_marks()
{
    FILE *tecnology;
tecnology=fopen("Student_marks_database.txt","a+");


    printf("The marks of %s:",subject_code[6][0]);
    scanf("%d",&sub_marks);
    sub_cgpa[0]=cgpa_calculation();
    sem_cgpa=(sub_cgpa[0]*3*6)/18;



    fprintf(tecnology,"Semester07 cgpa: %f\n",sem_cgpa);


 fclose(tecnology);




}

float cgpa_calculation()
{

    int sub_cgpa;
      FILE* velocity;

      velocity=fopen("Student_marks_database.txt","a+");


      if(sub_marks>=80)
      {

          sub_cgpa=4.00;
          fprintf(velocity,"%s\t%d\tA+\t4.00\n",subject_code[sm_no-1][i],sub_marks);
      }
      else if(sub_marks>=75)

      {

          sub_cgpa=3.75;
          fprintf(velocity,"%s\t%d\tA\t3.75\n",subject_code[sm_no-1][i],sub_marks);
      }

       else if(sub_marks>=70)

      {
           sub_cgpa=3.50;
          fprintf(velocity,"%s\t%d\tA-\t3.50\n",subject_code[sm_no-1][i],sub_marks);

      }

       else if(sub_marks>=65)

      {
           sub_cgpa=3.25;
          fprintf(velocity,"%s\t%d\tB+\t3.25\n",subject_code[sm_no-1][i],sub_marks);

      }

       else if(sub_marks>=60)

      {
           sub_cgpa=3.00;
          fprintf(velocity,"%s\t%d\tB\t3.00\n",subject_code[sm_no-1][i],sub_marks);

      }

       else if(sub_marks>=55)

      {
           sub_cgpa=2.75;
          fprintf(velocity,"%s\t%d\tB-\t2.75\n",subject_code[sm_no-1][i],sub_marks);

      }

       else if(sub_marks>=50)

      {
           sub_cgpa=2.50;
          fprintf(velocity,"%s\t%d\tC+\t2.50\n",subject_code[sm_no-1][i],sub_marks);

      }

       else if(sub_marks>=45)

      {
           sub_cgpa=2.25;
          fprintf(velocity,"%s\t%d\tC\t2.25\n",subject_code[sm_no-1][i],sub_marks);

      }

       else if(sub_marks>=40)

      {

           sub_cgpa=2.00;
          fprintf(velocity,"%s\t%d\tD\t2.00\n",subject_code[sm_no-1][i],sub_marks);
      }


    else

        {
             sub_cgpa=0.00;
          fprintf(velocity,"%s\t%d\tF\0.00\n",subject_code[sm_no-1][i],sub_marks);


        }

        fclose(velocity);



 return sub_cgpa;


}




int result()


{
    FILE *pt;

    char book[20000];
    pt=fopen("Student_marks_database.txt","r");


    fread(book,20000,1,pt);
    printf("%s",book);
    fclose(pt);

    return 0;
}

