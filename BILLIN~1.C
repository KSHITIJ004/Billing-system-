#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<dos.h>

int main()
{
 long double price, gst=0, total=0, discount=0, q=0;
 int e;
 char a,name[50],cashName[50];


 time_t t;   // not a primitive datatype
    time(&t);
 clrscr();
 sound(500);
 delay(1000);
 nosound();
printf("       CONTRIBUTE IN DIGITAL INDIA, PAY ONLINE \n");
printf("YOUR NAME PLEASE: ");
scanf("%s",&name);
printf("YOUR CONTACT NO PLEASE: ");
scanf("%d",&e);

printf("ENTER THE NAME OF CASHIER: ");
scanf("%s",&cashName);

 printf("\n\n  ENTER THE PEPPY PANEER PIZZA'S SIZE (Large (l), Medium (m), Small (s))\n\n");
 scanf("%s", &a);

 printf("\n\n ENTER QUANTITY \n\n");
 scanf("%Lf",&q);

 if(a=='l')
 {
    price=839;
 }
 else if(a=='m')
 {
    price=579;
 }
 else{
    price=319;
 }
total=price*q;
 gst= ((total/100)*18);
 if (total<399)
    total = total + gst + 100; //100 for service charge
   else
   {
    discount = total * 0.04;
    total = total+ gst - discount;
   }


// printf("%Lf",total);
    textcolor(13);
 cprintf("\nInvoice no:48629\n");
 textcolor(GREEN);
 cprintf("\n          WELCOME TO DOMINO'S PIZZA\n");
 printf("\n       \t\t\t<< YOUR TRUST IS OUR PRIDE >>\n");
 printf("\n  \t\t Crown Mall,2nd floor,Faizabad Road,LUCKNOW (UP)-226028 \n");
 printf("\n ------------------------------------------------------------------------------- \n");
 printf("\n    \t\t DOMINOS GREAT INDIAN FESTIVAL (Extra 10 percent off)");
 printf("\n\t\ ======================<^>============<^>==========================\n");
 printf("      Customer name : %s     contact no: %d",name,e);
 printf("\n      %s",ctime(&t));
 printf("\n PRICE :        %Lf",price);
 printf("\n NO. OF ITEMS : %Lf",q);
 printf("\n DISCOUNT :     %Lf",discount);
 printf("\n GST :          %Lf",gst);
 textcolor(14);
 cprintf("\n GRAND TOTAL :  %Lf INR ONLY",total);
 printf("\n**********************************************************************\n");
 printf("Payment received of Rs %Lf by %s through Debit Card ",total,cashName);
 printf("\n\t THANK YOU ! HAVE A NICE DAY AND PLEASE VISIT AGAIN\n");
 sound(1000) ;
 delay(500);
 nosound();
 sound(500);
 delay(500);
 nosound();
 getch();
return 0;
 }
