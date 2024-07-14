#include<stdio.h>
#include<conio.h>
int main(void)
{
        int i=1,n, s=0;
        clrscr();

        do
        {
                printf("Enter a number :")
                scanf("%d",&n);
                s=s+n;

                i++
        
        }
        while(i<=10);
        printf("sum = %d",s);
        getch();
}