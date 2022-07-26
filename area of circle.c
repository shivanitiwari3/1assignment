#include<stdio.h>
#include<conio.h>
main()
{clrscr();
int r;
float a;
printf("enter the value of radius");
scanf("%d",&r);
a=3.14*r*r;
printf("area of circle is %f having radius %d",r,a);
getch();
return 0;
}