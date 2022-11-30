// Math Games Project
//Author: Shahriar Siddique
//Date: 12-11-2018
//Version: 2.0


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

void menu();
void startgame();
void about();
void exitf();
void easymode();
void mediummode();
void hardmode();

void Additioneasy();
void subtractioneasy();
void multiplicationeasy();
void divitioneasy();

void Additionmed();
void subtractionmed();
void multiplicationmed();
void divitionmed();

void Additionhard();
void subtractionhard();
void multiplicationhard();
void divitionhard();





int main()
{
    system("clear");
    menu();


return 0;

}


void menu()
{
    system("clear");
    int n;
    printf("\t\t\t\t\t-------------\n");
    printf("\t\t\t\t\t| Math Game |\n");
    printf("\t\t\t\t\t-------------\n");


    printf("\n\n\n\t\t\t\t\tMenu\n");
    printf("\t\t\t\t\t----\n");

againmenu:
    printf("\t\t 1.- Start Game\n");
    printf("\t\t 2.- About me.\n");
    printf("\t\t 3.- Exit\n");
    scanf("%d",&n);


    if(n==1)
       startgame();
    else if(n==2)
        about();
        else if(n==3)
        exitf();
    else
    {
        system("clear");
        goto againmenu;
    }

}

void about(){
system("clear");
printf("Author: Shahriar Siddique");
printf("");
printf("My name is Shahriar Siddique\n");
printf("My ID is 181-35-286\n");
printf("Thank you.\n");
getchar();
getchar();

main();

}



void exitf()
{
    return;
}

void startgame()
{
system("clear");
printf("\t\t\t\t\t-----------\n");
    printf("\t\t\t\t\t| Options |\n");
    printf("\t\t\t\t\t-----------\n");

optionchoice:

  printf("Enter your choice : ");
  printf("\n\n1.- Easy mode\n");
  printf("2.- Medium mode\n");
  printf("3.- Hard mode\n");
  printf("\n\n");

  int choice;


  scanf("%d",&choice);

  if(choice==1)
   easymode();
  else if(choice==2)
   mediummode();
  else if(choice==3)
    hardmode();
  else
  {
      system("clear");
      printf("Wrong option you choice.\nTry again :\n\n");
      goto optionchoice;

  }

}


void easymode()
{
system("clear");

easymode1:

 printf("\n\n1. - Addition\n");
 printf("2. - subtraction\n");
 printf("3. - Multiplication\n");
 printf("4. - Division\n");

int num;
 scanf("%d",&num);

 if(num==1)
  Additioneasy();
 else if(num==2)
  subtractioneasy();
 else if(num==3)
  multiplicationeasy();
 else if(num==4)
  divitioneasy();
else
{
    printf("Wrong option. Please try again : \n\n");
    goto easymode1;

}

}


void mediummode()
{
system("clear");

mediummode1:

 printf("\n\n1. - Addition\n");
 printf("2. - subtraction\n");
 printf("3. - Multiplication\n");
 printf("4. - Division\n");

int num;
 scanf("%d",&num);

 if(num==1)
  Additionmed();
 else if(num==2)
  subtractionmed();
 else if(num==3)
  multiplicationmed();
 else if(num==4)
  divitionmed();
else
{
    printf("Wrong option. Please try again : \n\n");
    goto mediummode1;

}

}


void hardmode()
{
system("clear");

hardmode1:

 printf("\n\n1. - Addition\n");
 printf("2. - subtraction\n");
 printf("3. - Multiplication\n");
 printf("4. - Division\n");

int num;
 scanf("%d",&num);

 if(num==1)
  Additionhard();
 else if(num==2)
  subtractionhard();
 else if(num==3)
  multiplicationhard();
 else if(num==4)
  divitionhard();
else
{
    printf("Wrong option. Please try again : \n\n");
    goto hardmode1;

}

}


//condition start.


void Additioneasy()
{

 system("clear");
    int i,sc,scor=0;
    for (i = 0; ; i++) {


     int a,b,c,num;
     a= rand()%10;
     b=rand()%10;
     c=a+b;

     printf("\n%d+%d= ???\n",a,b);

     time_t rawtime = time(NULL);

    struct tm *ptm = localtime(&rawtime);

    int time1=ptm->tm_sec;

    scanf("%d",&num);

     time_t rawtime1 = time(NULL);

    struct tm *ptm1 = localtime(&rawtime1);

    int time2=ptm1->tm_sec;

    if(time2<time1)
        time2+=60;


    int time3=time2-time1;




    if(time3<0)
        time3=time3*(-1);



     if(time3<=10)
     {
         if(num==c)
         {
    sc=(10-time3)*10;
    scor=scor+sc;
            printf("Correct ans.\n");
            printf("your score : %d (time=%d)\n",sc,time3);
            printf("Total score : %d\n",scor);
         }
         else
         {
             printf("Wrong ans.\n");
             printf("Total score : %d\n",scor);
         printf("\n\n\nThank you for playing this game.\n");


         printf("Want to play again??\n");
         printf("Enter 1 to play again , Enter anything to exit :");
         int ab;
         scanf("%d",&ab);
         if(ab==1)
         menu();
         else
            return;


             break;
         }


     }
     else
     {
         printf("Time out.\n");

         printf("your score : %d\n",scor);
         printf("\n\n\nThank you for playing this game.\n");



         printf("Want to play again??\n");
         printf("Enter 1 to play again , Enter anything to exit :");
         int ab;
         scanf("%d",&ab);
         if(ab==1)
         menu();
         else
            return;
break;

     }


    }
}

    void subtractioneasy()
    {

    system("clear");
int i,scor=0,sc;
    for (i = 0; ; i++) {


     int a,b,c,num;
     a= rand()%10;
     b=rand()%10;
     c=a-b;

     printf("\n%d-%d= ???\n",a,b);

     time_t rawtime = time(NULL);

    struct tm *ptm = localtime(&rawtime);

    int time1=ptm->tm_sec;

    scanf("%d",&num);

     time_t rawtime1 = time(NULL);

    struct tm *ptm1 = localtime(&rawtime1);

    int time2=ptm1->tm_sec;
    if(time2<time1)
        time2+=60;


    int time3=time2-time1;

    if(time3<0)
        time3=time3*(-1);



    if(time3<=10)
     {
         if(num==c)
         {
    sc=(10-time3)*10;
    scor=scor+sc;
            printf("Correct ans.\n");
            printf("your score : %d (time=%d)\n",sc,time3);
            printf("Total score : %d\n",scor);
         }
         else
         {
             printf("Wrong ans.\n");
             printf("Total score : %d\n",scor);
         printf("\n\n\nThank you for playing this game.\n");


         printf("Want to play again??\n");
         printf("Enter 1 to play again , Enter anything to exit :");
         int ab;
         scanf("%d",&ab);
         if(ab==1)
         menu();
         else
            return;

             break;
         }


     }
     else
     {
         printf("Time out.\n");

         printf("your score : %d\n",scor);
         printf("\n\n\nThank you for playing this game.\n");

          printf("Want to play again??\n");
         printf("Enter 1 to play again , Enter anything to exit :");
         int ab;
         scanf("%d",&ab);
         if(ab==1)
            menu();
         else
            return;
         break;

     }
    }


    }

    void multiplicationeasy()
    {
system("clear");

int i,scor=0,sc;
    for (i = 0; ; i++) {


     int a,b,c,num;
     a= rand()%10;
     b=rand()%10;
     c=a*b;

     printf("\n%d*%d= ???\n",a,b);

     time_t rawtime = time(NULL);

    struct tm *ptm = localtime(&rawtime);

    int time1=ptm->tm_sec;

    scanf("%d",&num);

     time_t rawtime1 = time(NULL);

    struct tm *ptm1 = localtime(&rawtime1);

    int time2=ptm1->tm_sec;

        if(time2<time1)
        time2+=60;

    int time3=time2-time1;

    if(time3<0)
        time3=time3*(-1);



    if(time3<=10)
     {
         if(num==c)
         {
    sc=(10-time3)*10;
    scor=scor+sc;
            printf("Correct ans.\n");
            printf("your score : %d (time=%d)\n",sc,time3);
            printf("Total score : %d\n",scor);
         }
         else
         {
             printf("Wrong ans.\n");
             printf("Total score : %d\n",scor);
         printf("\n\n\nThank you for playing this game.\n");

          printf("Want to play again??\n");
         printf("Enter 1 to play again , Enter anything to exit :");
         int ab;
         scanf("%d",&ab);
         if(ab==1)
           menu();
         else
            return;

             break;
         }


     }
     else
     {
         printf("Time out.\n");

         printf("your score : %d\n",scor);
         printf("\n\n\nThank you for playing this game.\n");

          printf("Want to play again??\n");
         printf("Enter 1 to play again , Enter anything to exit :");
         int ab;
         scanf("%d",&ab);
         if(ab==1)
           menu();
         else
            return;
         break;

     }

    }

    }

    void divitioneasy()
    {

     system("clear");
int i,scor=0,sc;
    for (i = 0; ; i++) {


     int a,b,c,num;
     a= rand()%10;
     b=rand()%10;
     c=a/b;

     printf("\n%d/%d= ???\n",a,b);

     time_t rawtime = time(NULL);

    struct tm *ptm = localtime(&rawtime);

    int time1=ptm->tm_sec;

    scanf("%d",&num);

     time_t rawtime1 = time(NULL);

    struct tm *ptm1 = localtime(&rawtime1);

    int time2=ptm1->tm_sec;

        if(time2<time1)
        time2+=60;

    int time3=time2-time1;

    if(time3<0)
        time3=time3*(-1);



    if(time3<=10)
     {
         if(num==c)
         {
    sc=(10-time3)*10;
    scor=scor+sc;
            printf("Correct ans.\n");
            printf("your score : %d (time=%d)\n",sc,time3);
            printf("Total score : %d\n",scor);
         }
         else
         {
             printf("Wrong ans.\n");
             printf("Total score : %d\n",scor);
         printf("\n\n\nThank you for playing this game.\n");

          printf("Want to play again??\n");
         printf("Enter 1 to play again , Enter anything to exit :");
         int ab;
         scanf("%d",&ab);
         if(ab==1)
          menu();
         else
            return;

             break;
         }


     }
     else
     {
         printf("Time out.\n");

         printf("your score : %d\n",scor);
         printf("\n\n\nThank you for playing this game.\n");

          printf("Want to play again??\n");
         printf("Enter 1 to play again , Enter anything to exit :");
         int ab;
         scanf("%d",&ab);
         if(ab==1)
           menu();
         else
            return;
         break;

     }
    }


    }






    //2nd position.



    void Additionmed()
{

 system("clear");
int i,scor=0,sc;
    for (i = 0; ; i++) {


     int a,b,c,num;
     a= rand()%100;
     b=rand()%100;
     c=a+b;

     printf("\n%d+%d= ???\n",a,b);

     time_t rawtime = time(NULL);

    struct tm *ptm = localtime(&rawtime);

    int time1=ptm->tm_sec;

    scanf("%d",&num);

     time_t rawtime1 = time(NULL);

    struct tm *ptm1 = localtime(&rawtime1);

    int time2=ptm1->tm_sec;

        if(time2<time1)
        time2+=60;

    int time3=time2-time1;

    if(time3<0)
        time3=time3*(-1);



    if(time3<=10)
     {
         if(num==c)
         {
    sc=(10-time3)*10;
    scor=scor+sc;
            printf("Correct ans.\n");
            printf("your score : %d (time=%d)\n",sc,time3);
            printf("Total score : %d\n",scor);
         }
         else
         {
             printf("Wrong ans.\n");
             printf("Total score : %d\n",scor);
         printf("\n\n\nThank you for playing this game.\n");

          printf("Want to play again??\n");
         printf("Enter 1 to play again , Enter anything to exit :");
         int ab;
         scanf("%d",&ab);
         if(ab==1)
           menu();
         else
            return;

             break;
         }


     }
     else
     {
         printf("Time out.\n");

         printf("your score : %d\n",scor);
         printf("\n\n\nThank you for playing this game.\n");

          printf("Want to play again??\n");
         printf("Enter 1 to play again , Enter anything to exit :");
         int ab;
         scanf("%d",&ab);
         if(ab==1)
       menu();
         else
            return;
         break;

     }
    }


}

    void subtractionmed()
    {

 system("clear");
int i,scor=0,sc;
    for (i = 0; ; i++) {


     int a,b,c,num;
     a= rand()%100;
     b=rand()%100;
     c=a-b;

     printf("\n%d-%d= ???\n",a,b);

     time_t rawtime = time(NULL);

    struct tm *ptm = localtime(&rawtime);

    int time1=ptm->tm_sec;

    scanf("%d",&num);

     time_t rawtime1 = time(NULL);

    struct tm *ptm1 = localtime(&rawtime1);

    int time2=ptm1->tm_sec;

        if(time2<time1)
        time2+=60;

    int time3=time2-time1;

    if(time3<0)
        time3=time3*(-1);



    if(time3<=10)
     {
         if(num==c)
         {
    sc=(10-time3)*10;
    scor=scor+sc;
            printf("Correct ans.\n");
            printf("your score : %d (time=%d)\n",sc,time3);
            printf("Total score : %d\n",scor);
         }
         else
         {
             printf("Wrong ans.\n");
             printf("Total score : %d\n",scor);
         printf("\n\n\nThank you for playing this game.\n");

          printf("Want to play again??\n");
         printf("Enter 1 to play again , Enter anything to exit :");
         int ab;
         scanf("%d",&ab);
         if(ab==1)
          menu();
         else
            return;

             break;
         }


     }
     else
     {
         printf("Time out.\n");

         printf("your score : %d\n",scor);
         printf("\n\n\nThank you for playing this game.\n");

          printf("Want to play again??\n");
         printf("Enter 1 to play again , Enter anything to exit :");
         int ab;
         scanf("%d",&ab);
         if(ab==1)
          menu();
         else
            return;
         break;

     }

    }




    }

    void multiplicationmed()
    {

 system("clear");
int i,scor=0,sc;
    for (i = 0; ; i++) {


     int a,b,c,num;
     a= rand()%100;
     b=rand()%100;
     c=a*b;

     printf("\n%d*%d= ???\n",a,b);

     time_t rawtime = time(NULL);

    struct tm *ptm = localtime(&rawtime);

    int time1=ptm->tm_sec;

    scanf("%d",&num);

     time_t rawtime1 = time(NULL);

    struct tm *ptm1 = localtime(&rawtime1);

    int time2=ptm1->tm_sec;

        if(time2<time1)
        time2+=60;

    int time3=time2-time1;

    if(time3<0)
        time3=time3*(-1);



     if(time3<=10)
     {
         if(num==c)
         {
    sc=(10-time3)*10;
    scor=scor+sc;
            printf("Correct ans.\n");
            printf("your score : %d (time=%d)\n",sc,time3);
            printf("Total score : %d\n",scor);
         }
         else
         {
             printf("Wrong ans.\n");
             printf("Total score : %d\n",scor);
         printf("\n\n\nThank you for playing this game.\n");

          printf("Want to play again??\n");
         printf("Enter 1 to play again , Enter anything to exit :");
         int ab;
         scanf("%d",&ab);
         if(ab==1)
          menu();
         else
            return;

             break;
         }


     }
     else
     {
         printf("Time out.\n");

         printf("your score : %d\n",scor);
         printf("\n\n\nThank you for playing this game.\n");

          printf("Want to play again??\n");
         printf("Enter 1 to play again , Enter anything to exit :");
         int ab;
         scanf("%d",&ab);
         if(ab==1)
          menu();
         else
            return;
         break;

     }


    }



    }

    void divitionmed()
    {

 system("clear");
int i,scor=0,sc;
    for (i = 0; ; i++) {


     int a,b,c,num;
     a= rand()%100;
     b=rand()%100;
     c=a/b;

     printf("\n%d/%d= ???\n",a,b);

     time_t rawtime = time(NULL);

    struct tm *ptm = localtime(&rawtime);

    int time1=ptm->tm_sec;

    scanf("%d",&num);

     time_t rawtime1 = time(NULL);

    struct tm *ptm1 = localtime(&rawtime1);

    int time2=ptm1->tm_sec;

        if(time2<time1)
        time2+=60;

    int time3=time2-time1;

    if(time3<0)
        time3=time3*(-1);



   if(time3<=10)
     {
         if(num==c)
         {
    sc=(10-time3)*10;
    scor=scor+sc;
            printf("Correct ans.\n");
            printf("your score : %d (time=%d)\n",sc,time3);
            printf("Total score : %d\n",scor);
         }
         else
         {
             printf("Wrong ans.\n");
             printf("Total score : %d\n",scor);
         printf("\n\n\nThank you for playing this game.\n");

          printf("Want to play again??\n");
         printf("Enter 1 to play again , Enter anything to exit :");
         int ab;
         scanf("%d",&ab);
         if(ab==1)
           menu();
         else
            return;
             break;
         }


     }
     else
     {
         printf("Time out.\n");

         printf("your score : %d\n",scor);
         printf("\n\n\nThank you for playing this game.\n");

          printf("Want to play again??\n");
         printf("Enter 1 to play again , Enter anything to exit :");
         int ab;
         scanf("%d",&ab);
         if(ab==1)
           menu();
         else
            return;
         break;

     }

    }




    }

    //3rd postion


    void Additionhard()
{

  system("clear");
int i,scor=0,sc;
    for (i = 0; ; i++) {


     int a,b,c,num;
     a= rand()%1000;
     b=rand()%1000;
     c=a+b;

     printf("\n%d+%d= ???\n",a,b);

     time_t rawtime = time(NULL);

    struct tm *ptm = localtime(&rawtime);

    int time1=ptm->tm_sec;

    scanf("%d",&num);

     time_t rawtime1 = time(NULL);

    struct tm *ptm1 = localtime(&rawtime1);

    int time2=ptm1->tm_sec;

        if(time2<time1)
        time2+=60;

    int time3=time2-time1;

    if(time3<0)
        time3=time3*(-1);



     if(time3<=10)
     {
         if(num==c)
         {
    sc=(10-time3)*10;
    scor=scor+sc;
            printf("Correct ans.\n");
            printf("your score : %d (time=%d)\n",sc,time3);
            printf("Total score : %d\n",scor);
         }
         else
         {
             printf("Wrong ans.\n");
             printf("Total score : %d\n",scor);
         printf("\n\n\nThank you for playing this game.\n");

          printf("Want to play again??\n");
         printf("Enter 1 to play again , Enter anything to exit :");
         int ab;
         scanf("%d",&ab);
         if(ab==1)
          menu();
         else
            return;

             break;
         }


     }
     else
     {
         printf("Time out.\n");

         printf("your score : %d\n",scor);
         printf("\n\n\nThank you for playing this game.\n");

          printf("Want to play again??\n");
         printf("Enter 1 to play again , Enter anything to exit :");
         int ab;
         scanf("%d",&ab);
         if(ab==1)
           menu();
         else
            return;
         break;

     }
    }


}
    void subtractionhard()
    {

 system("clear");
int i,scor=0,sc;
    for (i = 0; ; i++) {


     int a,b,c,num;
     a= rand()%1000;
     b=rand()%1000;
     c=a-b;

     printf("\n%d+%d= ???\n",a,b);

     time_t rawtime = time(NULL);

    struct tm *ptm = localtime(&rawtime);

    int time1=ptm->tm_sec;

    scanf("%d",&num);

     time_t rawtime1 = time(NULL);

    struct tm *ptm1 = localtime(&rawtime1);

    int time2=ptm1->tm_sec;

        if(time2<time1)
        time2+=60;

    int time3=time2-time1;

    if(time3<0)
        time3=time3*(-1);



   if(time3<=10)
     {
         if(num==c)
         {
    sc=(10-time3)*10;
    scor=scor+sc;
            printf("Correct ans.\n");
            printf("your score : %d (time=%d)\n",sc,time3);
            printf("Total score : %d\n",scor);
         }
         else
         {
             printf("Wrong ans.\n");
             printf("Total score : %d\n",scor);
         printf("\n\n\nThank you for playing this game.\n");

          printf("Want to play again??\n");
         printf("Enter 1 to play again , Enter anything to exit :");
         int ab;
         scanf("%d",&ab);
         if(ab==1)
           menu();
         else
            return;

             break;
         }


     }
     else
     {
         printf("Time out.\n");

         printf("your score : %d\n",scor);
         printf("\n\n\nThank you for playing this game.\n");

          printf("Want to play again??\n");
         printf("Enter 1 to play again , Enter anything to exit :");
         int ab;
         scanf("%d",&ab);
         if(ab==1)
           menu();
         else
            return;
         break;

     }
    }




    }

    void multiplicationhard()
    {

 system("clear");
int i,scor=0,sc;
    for (i = 0; ; i++) {


     int a,b,c,num;
     a= rand()%1000;
     b=rand()%1000;
     c=a*b;

     printf("\n%d*%d= ???\n",a,b);

     time_t rawtime = time(NULL);

    struct tm *ptm = localtime(&rawtime);

    int time1=ptm->tm_sec;

    scanf("%d",&num);

     time_t rawtime1 = time(NULL);

    struct tm *ptm1 = localtime(&rawtime1);

    int time2=ptm1->tm_sec;

        if(time2<time1)
        time2+=60;

    int time3=time2-time1;

    if(time3<0)
        time3=time3*(-1);



    if(time3<=10)
     {
         if(num==c)
         {
    sc=(10-time3)*10;
    scor=scor+sc;
            printf("Correct ans.\n");
            printf("your score : %d (time=%d)\n",sc,time3);
            printf("Total score : %d\n",scor);
         }
         else
         {
             printf("Wrong ans.\n");
             printf("Total score : %d\n",scor);
         printf("\n\n\nThank you for playing this game.\n");

          printf("Want to play again??\n");
         printf("Enter 1 to play again , Enter anything to exit :");
         int ab;
         scanf("%d",&ab);
         if(ab==1)
          menu();
         else
            return;

             break;
         }


     }
     else
     {
         printf("Time out.\n");

         printf("your score : %d\n",scor);
         printf("\n\n\nThank you for playing this game.\n");

          printf("Want to play again??\n");
         printf("Enter 1 to play again , Enter anything to exit :");
         int ab;
         scanf("%d",&ab);
         if(ab==1)
           menu();
         else
            return;
         break;

     }
    }



    }

  void divitionhard()
  {

 system("clear");
int i,scor=0,sc;
    for (i = 0; ; i++) {


     int a,b,c,num;
     a= rand()%1000;
     b=rand()%1000;
     c=a/b;

     printf("\n%d/%d= ???\n",a,b);

     time_t rawtime = time(NULL);

    struct tm *ptm = localtime(&rawtime);

    int time1=ptm->tm_sec;

    scanf("%d",&num);

     time_t rawtime1 = time(NULL);

    struct tm *ptm1 = localtime(&rawtime1);

    int time2=ptm1->tm_sec;

        if(time2<time1)
        time2+=60;

    int time3=time2-time1;

    if(time3<0)
        time3=time3*(-1);



    if(time3<=10)
     {
         if(num==c)
         {
    sc=(10-time3)*10;
    scor=scor+sc;
            printf("Correct ans.\n");
            printf("your score : %d (time=%d)\n",sc,time3);
            printf("Total score : %d\n",scor);
         }
         else
         {
             printf("Wrong ans.\n");
             printf("Total score : %d\n",scor);
         printf("\n\n\nThank you for playing this game.\n");

          printf("Want to play again??\n");
         printf("Enter 1 to play again , Enter anything to exit :");
         int ab;
         scanf("%d",&ab);
         if(ab==1)
           menu();
         else
            return;

             break;
         }


     }
     else
     {
         printf("Time out.\n");

         printf("your score : %d\n",scor);
         printf("\n\n\nThank you for playing this game.\n");

          printf("Want to play again??\n");
         printf("Enter 1 to play again , Enter anything to exit :");
         int ab;
         scanf("%d",&ab);
         if(ab==1)
          menu();
         else
            return;
         break;

     }

    }




  }

//finish project.
