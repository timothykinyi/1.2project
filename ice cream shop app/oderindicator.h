#ifndef ODERINDICATOR_H_INCLUDED
#define ODERINDICATOR_H_INCLUDED





int menudefination (int a)
{
   double price[100]={1};

                  price[1]=30;  price[2]=50;  price[3]=60;  price[4]=60;  price[5]=50;
                  price[6]=70;  price[7]=60;  price[8]=80;  price[9]=80;
    price[10]=75; price[11]=60; price[12]=60; price[13]=60; price[14]=100;price[15]=75;
                  price[16]=90; price[17]=100;price[18]=60; price[19]=60;
    price[20]=60; price[21]=70; price[22]=60; price[23]=80; price[24]=75; price[25]=175;
                  price[26]=75; price[27]=90; price[28]=90; price[29]=70;
    price[30]=85; price[31]=90; price[32]=105;price[33]=90; price[34]=80; price[35]=95;
                  price[36]=90; price[37]=115;price[38]=100;price[39]=100;
    price[40]=100;price[41]=100;price[42]=100;price[43]=100;price[44]=100;price[45]=120;
                  price[46]=100;price[47]=100;price[48]=80; price[49]=90;
    price[50]=80;

  switch (a)
{
case  1 :


    printf("Vanilla Softy  ");

break;
case  2 :
    printf("Chocolate Softy ");
break;
case  3 :
    printf("Choco-Dip ");
break;
case  4 :
    printf("Choco-Vanilla Dip ");
break;
case  5 :
    printf("Choco-Vanilla ");
break;
case  6 :
    printf("Choco Crunch");
break;
case  7 :
    printf("Choco Mint Delight");
break;
case  8 :
    printf("Mango Mania ");
break;
case  9 :
    printf("Fruit Delight ");
break;
case  10 :
    printf("Butterscotch Caramel");
break;
case  11 :
    printf("Orange Delight");
break;
case  12 :
    printf("Black Currant Delight");
break;
case  13 :
    printf("Thandai Delight");
break;
case  14 :
    printf("Pista Delight");
break;
case  15 :
    printf("Strawberry Passion");
break;
case  16 :
    printf("Cherry Mania");
break;
case  17 :
    printf("Lichee Passion");
break;
case  18 :
    printf("Chocolate Delight");
break;
case  19 :
    printf("Mango Delight");
break;
case  20 :
    printf("Strawberry Delight");
break;
case  21 :
    printf("Banana Delight");
break;
case  22 :
    printf("Mint Delight");
break;
case  23 :
    printf("Pineapple Delight");
break;
case  24 :
    printf("Nut Butterscotch Crunch");
break;
case  25 :
    printf("Choco Carame");
break;
case  26 :
    printf("Nutty Crunch");
break;
case  27 :
    printf("Choco Mania");
break;
case  28 :
    printf("Badam Delight");
break;
case  29 :
    printf("Choco Vanilla Waffle");
break;
case  30 :
    printf("Choco Crunch Waffle");
break;
case  31 :
    printf("Nutty Crunch Waffle");
break;
case  32 :
    printf("Choco Mania Waffle");
break;
case  33 :
    printf("Butterscotch Caramel Waffle");
break;
case  34 :
    printf("Mango Ripple Waffle");
break;
case  35 :
    printf("Fruit Delight Waffle");
break;
case  36 :
    printf("Nut Butterscotch Waffle");
break;
case  37 :
    printf("Pista Delight Waffle");
break;
case  38 :
    printf("Orange Jellos");
break;
case  39 :
    printf("Double Jellos Sundae");
break;
case  40 :
    printf("Pineapple Jellos");
break;
case  41 :
    printf("Spl. Strawberry Jellos");
break;
case  42 :
    printf("Raspberry Jellos");
break;
case  43 :
    printf("Chocolate Fantasies");
break;
case  44 :
    printf("Strawberry Fantasies");
break;
case  45 :
    printf("Mix Fruit Sundae");
break;
case  46 :
    printf("Pineapple Fantasies");
break;
case  47 :
    printf("Butterscotch Fantasies");
break;
case  48 :
    printf("Chocolate Ice Cream Soda");
break;
case  49 :
    printf("Lichee Ice Cream Soda");
break;
case  50 :
    printf("Mint Ice Cream Soda");
break ;
default:
    printf("option not  available");
break;
}

printf(" @ %.02f  ",price[a]);






}
#endif // ODERINDICATOR_H_INCLUDED
