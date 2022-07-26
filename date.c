#include<stdio.h>
#include<conio.h>
main()
{   clrscr();
    int day,month,year;
    printf("enter date in DD/MM/YYYY format");
    scanf("%d %d %d",&day,&month,&year);
    printf("\n day=%d, month=%d, year=%d",day,month,year);
    return 0;
    getch();
}