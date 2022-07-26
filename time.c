#include<stdio.h>
#include<conio.h>
main()
{   clrscr();
    int hrs,min;
    printf("enter time in HH:MM format");
    scanf("%d %d ",&hrs,&min);
    printf("\n %dhours and %d minutes", hrs,min);
    return 0;
    getch();
}