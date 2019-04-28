



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int menu();
int profile();
int view();
int marks_processing();
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
int enter_marks(int);
int intern_marks(int);
char subject_code[8][6][14];
float cgpa;
float sub_cgpa[6];
int sub_marks[6];
float sem_cgpa[8];
int r=1;
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
      printf("######\t######\t######\n");

    printf("  ##  \t  ##  \t  ##\n");

    printf("  ##  \t  ##  \t  ##\n");

    printf("  ##  \t  ##  \t  ##\n");

    printf("  ##  \t  ##  \t  ##\n");

    printf("  ##  \t  ##  \t  ##\n");

    printf("  ##  \t  ##  \t  ##\n");

    printf("######\t######\t  ##\n");



    printf("1.For Profiling:(PRESS 1)\n");
    printf("2.For Viewing:(PRESS 2)\n");
    printf("3.For Entering marks:(PRESS 3)\n");
    printf("4.For Showing result:(PRESS 4)\n\n");
    printf("Enter your choice:\n");
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
        printf("Sorry you press wrong key");

    }

    printf("press 1 for continue\n");
    printf("press 0 for stop\n");

    int bio;
           scanf("%d",&bio);
    if(bio==1)

    {
        return menu();

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
        char roll[10];
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
        fgets(iitian[i].roll,10,stdin);
        fprintf(ptr,"%s",iitian[i].roll);



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

                  fprintf(quality,"Students_roll_no%s",bsse_roll);

                 fclose(quality);
          semester_wise_mark(bsse_roll[14]);
    return 0;
}

int  semester_wise_mark(char bsse_roll[14])

{
             FILE *quality;

        int option;
         quality=fopen("Student_marks_database.txt","a+");
  printf("Enter the semester no:\n");
                  scanf("%d",&sm_no);
                  fprintf(quality,"result_of_semester_0%s",sm_no);
                     fclose(quality);

                  if(sm_no==1)

                  {
                      semester01();
                      enter_marks(sm_no-1);

                  }
                  else if (sm_no==2)
                  {

                      semester02();
                      enter_marks(sm_no-1);
                  }
                  else if(sm_no==3)

                  {
                      semester03();
                      enter_marks(sm_no-1);

                  }
                  else if(sm_no==4)

                  {
                      semester04();
                      enter_marks(sm_no-1);
                  }
                else if(sm_no==5)

                {
                    semester05();
                    enter_marks(sm_no-1);
                }
                else if(sm_no==6)

                {
                    semester06();
                    enter_marks(sm_no-1);
                }
                else if(sm_no==7)

                {
                    semester07();
                    intern_marks(sm_no-1);
                }
                else if(sm_no==8)

                {
                    semester08();
                    enter_marks(sm_no-1);
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
                      return marks_processing();
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








int enter_marks(int semester)
{

FILE *tecnology;
tecnology=fopen("Student_marks_database.txt","a+");

for(i=0;i<6;i++)
{


    printf("The marks of %s\n",subject_code[semester][i]);
    scanf("%d",sub_marks[i]);
   sub_cgpa[i]=cgpa_calculation(sub_marks[i],i);
   sem_cgpa[r]=sem_cgpa[r]+sub_cgpa[i];
}
sem_cgpa[r]=sem_cgpa[r]/6;
  fprintf(tecnology,"Semester0%d cgpa: %f\n",sm_no,sem_cgpa[r]);
    cgpa=grand_cgpa_calculation(r);
    r++;
 fprintf(tecnology,"Cureent cgpa: %f\n",cgpa);

 fclose(tecnology);
return 0;
}

int intern_marks(int semester)
{
    FILE *tecnology;
tecnology=fopen("Student_marks_database.txt","a+");


    printf("The marks of %s\n",subject_code[semester][0]);
    scanf("%d",sub_marks[0]);
    sub_cgpa[0]=cgpa_calculation(sub_marks[0],0);
    sem_cgpa[r]=(sub_cgpa[0]*3)/18;

    fprintf(tecnology,"Semester0%d cgpa: %f\n",sm_no,sem_cgpa[r]);
    cgpa=grand_cgpa_calculation(r);
    r++;
 fprintf(tecnology,"Cureent cgpa: %f\n",cgpa);

 fclose(tecnology);




}

int cgpa_calculation(int sub_marks[i],int i)
{
      FILE* velocity;

      velocity=fopen("Student_marks_database.txt","a+");


      if(sub_marks[i]>=80)
      {

          sub_cgpa[i]=4.00;
          fprintf(velocity,"%s\tsub_marks[%d]\tA+\t4.00\n",subject_code[sm_no][i],i);
      }
      else if(sub_marks[i]>=75)

      {

          sub_cgpa[i]=3.75;
          fprintf(velocity,"%s\tsub_marks[%d]\tA\t3.75\n",subject_code[sm_no][i],i);
      }

       else if(sub_marks[i]>=70)

      {
           sub_cgpa[i]=3.50;
          fprintf(velocity,"%s\tsub_marks[%d]\tA-\t3.50\n",subject_code[sm_no][i],i);

      }

       else if(sub_marks[i]>=65)

      {
           sub_cgpa[i]=3.25;
          fprintf(velocity,"%s\tsub_marks[%d]\tB+\t3.25\n",subject_code[sm_no][i],i);

      }

       else if(sub_marks[i]>=60)

      {
           sub_cgpa[i]=3.00;
          fprintf(velocity,"%s\tsub_marks[%d]\tB\t3.00\n",subject_code[sm_no][i],i);

      }

       else if(sub_marks[i]>=55)

      {
           sub_cgpa[i]=2.75;
          fprintf(velocity,"%s\tsub_marks[%d]\tB-\t2.75\n",subject_code[sm_no][i],i);

      }

       else if(sub_marks[i]>=50)

      {
           sub_cgpa[i]=2.50;
          fprintf(velocity,"%s\tsub_marks[%d]\tC+\t2.50\n",subject_code[sm_no][i],i);

      }

       else if(sub_marks[i]>=45)

      {
           sub_cgpa[i]=2.25;
          fprintf(velocity,"%s\tsub_marks[%d]\tC\t2.25\n",subject_code[sm_no][i],i);

      }

       else if(sub_marks[i]>=40)

      {

           sub_cgpa[i]=2.00;
          fprintf(velocity,"%s\tsub_marks[%d]\tD\t2.00\n",subject_code[sm_no][i],i);
      }


    else

        {
             sub_cgpa[i]=0.00;
          fprintf(velocity,"%s\tsub_marks[%d]\tF\0.00\n",subject_code[sm_no][i],i);


        }

        fclose(velocity);






}

int grand_cgpa_calculation(int r)
{

    int j;
    int dumm=0;
    for(j=1;j<=r;j++)

    {
      dumm= dumm+sem_cgpa[j];
    }
    dumm=dumm/r;

    return dumm;
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

