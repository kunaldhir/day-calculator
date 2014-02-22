#include<math.h>
#include<conio.h>
#include<stdio.h>

void main()
{
int d,m,yy,D,xx,c,a,n;
float q,b,R;
clrscr();
printf("\nenter date : ");
scanf("%d", &d);
printf("\nenter number of the month :");
scanf("%d", &n);
printf("\nenter first two digits of year :");
scanf("%d", &xx);
printf("\nenter last two digits of year :");
scanf("%d", &yy);
if(n==1) {m=0;}
if(n==2) {m=3;}
if(n==3) {m=3;}
if(n==4) {m=6;}
if(n==5) {m=1;}
if(n==6) {m=4;}
if(n==7) {m=6;}
if(n==8) {m=2;}
if(n==9) {m=5;}
if(n==10) {m=0;}
if(n==11) {m=3;}
if(n==12) {m=5;}
q=yy/4;
a=xx*100;
b=a%400;
if (b==0) {c=6;}
if(b==100) {c=4;}
if(b==200) {c=2;}
if(b==300) {c=0;}

D=d+m+yy+q+c;
if(yy%4==0&&n==1) {D=D-1;}
if(yy%4==0&&n==2) {D=D-1;}
else {D=D;}
R=(D%7);
if(R==0) {printf("sunday");}
if(R==1) {printf("monday");}
if(R==2) {printf("tuesday");}
if(R==3) {printf("wednesday");}
if(R==4) {printf("thursday");}
if(R==5) {printf("friday");}
if(R==6) {printf("saturday");}
getch();
}


