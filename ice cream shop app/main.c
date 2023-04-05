#include <stdio.h>
#include <stdlib.h>
# include <conio.h>
# include <string.h>
# include <windows.h>
# include "oderindicator.h"
# include "price.h"
# include "menu.h"
#include<time.h>
# include "PAYCHEAKER.h"

void intro ();
void options();
int cheaker (int a);
void menu ();
void ordeer() ;
int add ();
int identity();
void payment (double a);
int db(int a,int i);
void specialoffer();
void admn ();
void contacts ();
void action ();
void confirm ();
int code();
void print ();

struct identity
{

char name[21];
int number1 [15];
char email[20];
char orderz[50];

}c1,c2;

    time_t t;


int order[20];
typedef int ordernumber;ordernumber n;
double total=0;

int main()
{


    while (1)
    {
     total=0;
    intro ();
    options();

    }
    return 0;
}

void intro ()
{
    system("cls");
    printf("\t\t\t\t MAZ ICECREAM SHOP \n");
    printf("\t\t\t\t");
    for (int i=0;i<19;i++)
        {
            printf("%c",278);
        }
    printf("\n");
}

void options()
{
    int choicee=0;
   printf("CHOOSE FROM THE FOLLOWING\n");
    for (int i=0;i<26;i++){printf("%c",278);}

   printf("\n  1. see the menu \n  2. see orders made \n  3. special offers \n  4. contacts \n  5. admin \n  6. exit\n");
   printf("enter your choice :  ");

   scanf("%d",&choicee);
   cheaker (choicee);


}

int cheaker (int a)
{
    switch (a)
    {
        case 1:
             menu ();
        break;
        case 2:
            openorders();
        break;
        case 3:
            specialoffer();
        break;
        case 4:
            contacts ();
        break;
        case 5:
            security();
        break;
        case 6:

        break;
        default:
        printf ("\n invalid choice ");
        if (a==NULL){}
        else{options ();}

    }


    return 0;
}

void menu ()
{
    system ("cls");
    FILE *menuu;
    menuu=fopen("menu","r");
    char c;
    while (c != EOF)
    {

    c=fgetc(menuu);
    printf("%c",c);

    }
    fclose(menuu);

    int de;
    printf("\n Do you want to place an order ? \n1 YES \n2 NO\nEnter choice 1 or 2 : ");
    scanf("%d",&de);




    switch (de)
    {
    case 1:

        identity();
        ordeer();
    break;
    case 2:
     exit;
    break;
    default:
        printf("Invalid choice :");
        system("pause");
        menu ();
    break;
    }

}

int identity()
{
char me[10];
    gets(me);
printf("enter your names\n");
gets(c1.name);
printf("enter phone number\n");
gets(c1.number1);
printf("enter email\n");
gets(c1.email);

FILE *fp;
fp=fopen("contacts","a+");
fprintf(fp,"%s\n %s\n %s\n",c1.name,c1.number1,c1.email);

fclose(fp);

return 0;
}

 void ordeer()
{
  printf("\nHow many orders do you have ?  ");
  scanf("%d",&n);

  for (int j=1;j<=n;j++)
  {
      printf("Enter your order number %d : ",j);
      scanf("%d",&order[j]);
  }
  system("cls");
  printf(" %s You have ordered the following \n",c1.name);
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("on: %d-%02d-%02d ",tm.tm_mday, tm.tm_mon + 1,tm.tm_year + 1900);
    printf("at: %02d:%02d:%02d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
}

  for (int i=1;i<=n;i++)
  {
      printf("%d ",i);
      menudefination (order[i]);
      printf("\n");
  }

add ();
}

int add ()
{
        double price[100]={1};

                  price[1]=30.00;  price[2]=50.00;  price[3]=60.00;  price[4]=60.00;  price[5]=50.00;
                  price[6]=70.00;  price[7]=60.00;  price[8]=80.00;  price[9]=80.00;
    price[10]=75.00; price[11]=60.00; price[12]=60.00; price[13]=60.00; price[14]=100.00;price[15]=75.00;
                  price[16]=90.00; price[17]=100.00;price[18]=60.00; price[19]=60.00;
    price[20]=60.00; price[21]=70.00; price[22]=60.00; price[23]=80.00; price[24]=75.00; price[25]=175.00;
                  price[26]=75.00; price[27]=90.00; price[28]=90.00; price[29]=70.00;
    price[30]=85.00; price[31]=90.00; price[32]=105.00;price[33]=90.00; price[34]=80.00; price[35]=95.00;
                  price[36]=90.00; price[37]=115.00;price[38]=100.00;price[39]=100.00;
    price[40]=100.00;price[41]=100.00;price[42]=100.00;price[43]=100.00;price[44]=100.00;price[45]=120.00;
                  price[46]=100.00;price[47]=100.00;price[48]=80.00; price[49]=90.00;
    price[50]=80.00;


     for (int i=1;i<=n;i++)
  {

    total = total+price[order[i]];

  }
  printf (" The total cost is : %.02f \n",total);
    payment (total);
  }

void payment (double a)
{   int option=0;
    printf("\n\nChose payment option\n");
    printf("1 Mpesa\n2 Cash\n");
    scanf("%d",&option);

    if (option==1)
    {  system("cls");
         int number[11];
        printf("Enter Mpesa number ");
        scanf("%s",&number);
        printf("Mpesa number %s \nto pay %.02f to MAZ ICECREAMSHOP \n",number,a);
        fflush(stdin);
        paycheaker();
        code();
    }else if (option==2)
    {system("cls");
      printf("Visit nearest cashier to make your payment \n Thank you\n");
    }
    system("pause");
}

void openorders()
{system ("cls");
    char fileopenner[20];
    printf("Enter the name on receipt including the number . \n");
    scanf("%s",&fileopenner);

   FILE *or;
      or=fopen(fileopenner,"r");
      if(or!=NULL)
      {
        char c;
    while (c != EOF)
    {

    c=fgetc(or);
    printf("%c",c);

    }
    fclose(or);

      }else
      {
          printf("\nThe name entered doesn't exist\n");
      }
      system("pause");
}

int db(int a,int i){

      FILE * gg;
  gg=fopen(c1.name,"a+");
  while (i==1)
  {
        fprintf(gg,"\n %s You have ordered the following \n",c1.name);
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    fprintf(gg,"on: %d-%02d-%02d ",tm.tm_mday, tm.tm_mon + 1,tm.tm_year + 1900);
    fprintf(gg,"at: %02d:%02d:%02d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
}

      break;
  }
  switch (a)
{
case  1 :
    fprintf(gg,"%d ",i);
     fprintf(gg," Vanilla Softy ");
 fprintf(gg,"\n");
break;
case  2 :
    fprintf(gg,"%d ",i);
    fprintf(gg," Chocolate Softy ");
     fprintf(gg,"\n");
break;
case  3 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Choco-Dip ");
     fprintf(gg,"\n");
break;
case  4 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Choco-Vanilla Dip ");
     fprintf(gg,"\n");
break;
case  5 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Choco-Vanilla ");
     fprintf(gg,"\n");
break;
case  6 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Choco Crunch");
     fprintf(gg,"\n");
break;
case  7 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Choco Mint Delight");
     fprintf(gg,"\n");
break;
case  8 :
    fprintf(gg,"%d ",i);
   fprintf(gg,"Mango Mania ");
     fprintf(gg,"\n");
break;
case  9 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Fruit Delight ");
     fprintf(gg,"\n");
break;
case  10 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Butterscotch Caramel");
     fprintf(gg,"\n");
break;
case  11 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Orange Delight");
     fprintf(gg,"\n");
break;
case  12 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Black Currant Delight");
     fprintf(gg,"\n");
break;
case  13 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Thandai Delight");
     fprintf(gg,"\n");
break;
case  14 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Pista Delight");
     fprintf(gg,"\n");
break;
case  15 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Strawberry Passion");
     fprintf(gg,"\n");
break;
case  16 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Cherry Mania");
     fprintf(gg,"\n");
break;
case  17 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Lichee Passion");
     fprintf(gg,"\n");
break;
case  18 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Chocolate Delight");
     fprintf(gg,"\n");
break;
case  19 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Mango Delight");
     fprintf(gg,"\n");
break;
case  20 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Strawberry Delight");
     fprintf(gg,"\n");
break;
case  21 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Banana Delight");
     fprintf(gg,"\n");
break;
case  22 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Mint Delight");
     fprintf(gg,"\n");
break;
case  23 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Pineapple Delight");
     fprintf(gg,"\n");
break;
case  24 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Nut Butterscotch Crunch");
     fprintf(gg,"\n");
break;
case  25 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Choco Carame");
     fprintf(gg,"\n");
break;
case  26 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Nutty Crunch");
     fprintf(gg,"\n");
break;
case  27 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Choco Mania");
     fprintf(gg,"\n");
break;
case  28 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Badam Delight");
     fprintf(gg,"\n");
break;
case  29 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Choco Vanilla Waffle");
     fprintf(gg,"\n");
break;
case  30 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Choco Crunch Waffle");
     fprintf(gg,"\n");
break;
case  31 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Nutty Crunch Waffle");
     fprintf(gg,"\n");
break;
case  32 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Choco Mania Waffle");
     fprintf(gg,"\n");
break;
case  33 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Butterscotch Caramel Waffle");
     fprintf(gg,"\n");
break;
case  34 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Mango Ripple Waffle");
     fprintf(gg,"\n");
break;
case  35 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Fruit Delight Waffle");
     fprintf(gg,"\n");
break;
case  36 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Nut Butterscotch Waffle");
     fprintf(gg,"\n");
break;
case  37 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Pista Delight Waffle");
     fprintf(gg,"\n");
break;
case  38 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Orange Jellos");
     fprintf(gg,"\n");
break;
case  39 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Double Jellos Sundae");
     fprintf(gg,"\n");
break;
case  40 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Pineapple Jellos");
     fprintf(gg,"\n");
break;
case  41 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Spl. Strawberry Jellos");
     fprintf(gg,"\n");
break;
case  42 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Raspberry Jellos");
     fprintf(gg,"\n");
break;
case  43 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Chocolate Fantasies");
     fprintf(gg,"\n");
break;
case  44 :
    fprintf(gg,"%d ",i);
   fprintf(gg,"Strawberry Fantasies");
     fprintf(gg,"\n");
break;
case  45 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Mix Fruit Sundae");
     fprintf(gg,"\n");
break;
case  46 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Pineapple Fantasies");
     fprintf(gg,"\n");
break;
case  47 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Butterscotch Fantasies");
     fprintf(gg,"\n");
break;
case  48 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Chocolate Ice Cream Soda");
     fprintf(gg,"\n");
break;
case  49 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Lichee Ice Cream Soda");
     fprintf(gg,"\n");
break;
case  50 :
    fprintf(gg,"%d ",i);
    fprintf(gg,"Mint Ice Cream Soda");
     fprintf(gg,"\n");
break ;
default:
    printf("option not  available");
break;
}
fclose(gg);

}

void specialoffer()
{system ("cls");
    FILE *so;
    so=fopen("specialoffer","r");
    char c;
    while (c != EOF)
    {

    c=fgetc(so);
    printf("%c",c);

    }
    fclose(so);

    int A;
    printf("\n\n Do you want to place an order if YES enter 1 if NO enter 2 : ");
    scanf("%d",&A);

       if (A==1)
    {
        identity();


  printf("\nHow many orders do you have ?  ");
  scanf("%d",&n);

  for (int j=1;j<=n;j++)
  {
      printf("Enter your order number %d : ",j);
      scanf("%d",&order[j]);
  }

  FILE * gg;
  gg=fopen(c1.name,"a+");
  printf(" %s You have ordered the following \n",c1.name);
  fprintf(gg," %s You have ordered the following \n",c1.name);
  {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    fprintf(gg,"on: %d-%02d-%02d ",tm.tm_mday, tm.tm_mon + 1,tm.tm_year + 1900);
    fprintf(gg,"at: %02d:%02d:%02d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
}
  for (int i=1;i<=n;i++)
  {
      printf("%d ",i);
      fprintf(gg," special offer number %d ",order[i]);
      printf(" special offer number %d ",order[i]);
      printf("\n");
      fprintf(gg,"\n");


  }fclose(gg);
  }else
    {
      exit;
    }

system("pause");
}

void admn ()
{
    typedef struct specialoffer
    {   int code[4];
        int price[4];
        char name[30];
    }offer;
    offer add[10];
   int number_of_offer =0;
   printf("Enter the number of products that are on offer today : ");
   scanf("%d",&number_of_offer);

   for(int i=1;i<=number_of_offer;i++)
   {
       printf("Enter code of product %d : ",i);
       scanf("%s",&add[i].code);
       printf("Enter name of product %d : ",i);
       scanf("%s",&add[i].name);
       printf("Enter price of product %d : ",i);
       scanf("%s",&add[i].price);

   }

   FILE *so;
    so=fopen("specialoffer","w");
   fprintf( so,"        SPECIAL OFFERS OF THE DAY\n\n ");
   fprintf( so,"       name            price \n");
   for(int i=1;i<=number_of_offer;i++)
   {

       //fprintf(so," %d ",i);
       fprintf(so,"%s  ",add[i].code);
       fprintf(so,"%s    ",add[i].name);
       fprintf(so,"  %s\n",add[i].price);

   }
   fclose(so);
}

void contacts ()
{system("cls");


        FILE *contacts;
    contacts=fopen("for jobs contacts","r");
    char c;
    while (c != EOF)
    {

    c=fgetc(contacts);
    printf("%c",c);

    }
    fclose(contacts);
system("pause");
}

void action ()
{

 printf("Enter operation to perform : ");
 printf("\n1. Admin controle \n2. Exit :");
 int d; scanf("%d",&d);
 if (d==1)
 {
         admn ();
}
else if (d==2)
{

}
}

int code()
{
char cheaker[15];

    FILE *ok;
    ok=fopen("message","r");

char c[12];
int n=0;

    while((c[12]!=EOF)&&(n<=10))
    {  c[n]=fgetc(ok);
        n++;
        if(n==10)
        {
            c[12]=EOF;
        }
    }
    n=0;
    fclose(ok);


        printf("%s",c);


    FILE *pp;
    pp=fopen("pay","w");
    fprintf (pp,"%s Confirmed.You have received Ksh%.2f ",c,total);
    fclose(pp);

    confirm ();


    return 0;
}

void confirm ()
{
    int cnt;
    if(total<=10)
    {
       cnt=46;
    }else  if((total>=10)&&(total<100))
    {
       cnt=47;
    }else  if((total>=100)&&(total<1000))
    {
       cnt=48;
    }else  if((total>=1000)&&(total<10000))
    {
       cnt=49;
    }else  if((total>=10000)&&(total<100000))
    {
       cnt=50;
    }else  if((total>=100000)&&(total<1000000))
    {
       cnt=51;
    }




  FILE*ku;
    ku=fopen("message","r");
    char e[100];
    int n=0;
    while((n<=cnt))
    {

        e[n]=fgetc(ku);

        n++;
    }
    fclose(ku);
    n=0;
printf("\n%s",e);

FILE*ppo;
    ppo=fopen("pay","r");
    char m[100];
    int l=0;
    while((l<=cnt))
    {

        m[l]=fgetc(ppo);

        l++;
    }
    fclose(ppo);
    l=0;
printf("\n%s",m);

    if (strcmp(m,e)==0)
{
        printf("paid");
        print ();
    }else
    {
    printf("not paid");
    printf("visit the nearest teller or tr to place the order again");
    printf("Incase you had made the payment and it has not reflected either visit the nearest teller or press one to try again");
    }
   int g;
   gets(g);
   if(g==1)
   {
      paycheaker();
      code();
   }
}


void print ()
{

int v=((strlen(c1.name)));
int r;
srand;
char t=rand ()%10;
c1.name[v]=t;

     FILE * gg;
  gg=fopen(c1.name,"a+");

    for (int i=1;i<=n;i++)
{
      db(order[i],i);
}fclose(gg);
printf("thank you ordering at MAZ :\n Here is ur receipt \n");
printf("your order name is %s\n",c1.name);
  for (int i=1;i<=n;i++)
  {
      printf("%d ",i);
      menudefination (order[i]);
      printf("\n");
  }
printf("\nBON APPETITE !\nTHANK YOU!%c",1);
system("pause");
}
