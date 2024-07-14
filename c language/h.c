#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<windows.h>
void welcome(char name[40])
{  
    
    system("cls");
    Sleep(500); 
    printf("\n\t\t");
    for(int j = 0;j < (strlen(name))+12 ;j++)
   {    Sleep(100);
        printf("*");

    }
      Sleep(100);
    printf("\n\t\t* Welcome %s *\n\t\t",name);
    for(int j = 0;j < (strlen(name))+12 ;j++)
    {   
        Sleep(100);
        printf("*");

    }
         

    free(name);
    

}
void intro()
{   
    printf("\n.................................\n");
    printf(": Enter Any Key To Continue :\n");
    printf(".................................\n");  
    getch(); 
    printf("\t\t'RUES'\n");
    printf("'1'There Are Three Attempts.\n");
    printf("'2'Whose score will be max\n   He will win the game.\n");

    
}
int choice()
{   
    int ch1;
    printf("\n...............................\n");
    printf("Your Turn :\n");
    printf("'1' For 'Rock'\n");
    printf("'2' For 'Paper'\n");
    printf("'3' For 'Scissors'\n");
    printf("...............................\n");
    printf("Choose :");
    scanf("%d",&ch1);
    printf("...............................\n");
    return ch1;

}
void chosen(int ch1)
{   
    char input1[] = "Rock";
    char input2[] = "Paper"; 
    char input3[] = "Scissors";
    if(ch1==1)
    {   printf("\n...............................\n");
        printf("You have chosen : %s\n",input1);
        printf("...............................\n");
    }
    else if(ch1==2)
    {   
        printf("\n...............................\n");
        printf("You have chosen : %s\n",input2);
        printf("...............................\n");
    }
    else if(ch1==3)
    {   
        printf("\n...............................\n");
        printf("You have chosen : %s\n",input3);
        printf("...............................\n");
    }
    else
    {
        printf("\n...............................\n");
        printf("Invalid Input...!\n");
        printf("...............................\n");
    }

}

int randomvariable()
{   
    printf("\n...............................\n");
    printf("Computer's Turn\n");
    printf("'1' For 'Rock'\n");
    printf("'2' For 'Paper'\n");
    printf("'3' For 'Scissors'\n");
    printf("...............................\n");
    srand(time(NULL)*1222.21);
    return rand() %3;

}
void chosen1(int rv)
{
    char input1[] = "Rock";
    char input2[] = "Paper"; 
    char input3[] = "Scissors";
    if(rv==0)
    {
        printf("\n...............................\n");
        printf("Computer have chosen : %s\n",input1);
        printf("...............................\n");
    }
    else if(rv==1)
    {
        printf("\n...............................\n");
        printf("Computer have chosen :%s\n",input2);
        printf("...............................\n");
    }
    else if(rv==2)
    {   
        printf("\n...............................\n");
        printf("Computer have chosen : %s\n",input3);
        printf("...............................\n");
    }   

    else
    {   
        printf("\n...............................\n");
        printf("Invalid Input...!");
        printf("...............................\n");
    }

}
int score(int a,int b)
{   
    if(a==b)
    {
        return -1;
    }

    else if((a==1) && (b==2))
    {
        return 0;
    }
    else if((a==2)&&(b==1))
    {
        return 1;
    }
    else if((a==2)&&(b==3))
    {
         return 0;
    }
    else if((a==3)&&(b==2))
    {
         return 1;
    }

    else if((a==3)&&(b==1))
    {
         return 0;
    }
    else if((a==1)&&(b==3))
    {
         return 1;
    }
    else
    {
        return 2;
    }

}
void greater(int a,int b)
{
    if(a == b)
    {   
        printf("\n\t\t.................\n");
        printf("\t\t: It's Draw...! :\n");
        printf("\t\t.................\n");
    }
    else if(a > b)
    {
        printf("\n\t\t.............\n");
        printf("\t\t:  YOU WON :\n");
        printf("\t\t.............\n");


    }
    else if(a < b)
    {
        printf("\n\t\t................\n");
        printf("\t\t: YOU LOSE...! :\n");
        printf("\t\t................\n");
    }





}
int again()
{   int ch2;
    printf("Do You Want to Play Again :\n'1' For YES\n'2' For NO\n");
    scanf("%d",&ch2);
    return ch2;


}
void thanks(int ch2,char name[40])
{   
    if(ch2==2)
    {
        printf("\n\t\t");
        for(int j = 0;j < (strlen(name))+26 ;j++)
        { 
            Sleep(100);
            printf("*");

        }
        printf("\n\t\t* Thanks For playing %s..! *\n",name);
        printf("\t\t");
        for(int j = 0;j < (strlen(name))+26 ;j++)
        {    
            Sleep(100);
            printf("*");

        }
    }
}

int main()
{   
    system("cls");
    int ch1,ch2,rv,sc;
    int playerScore = 0,CompScore = 0;
    char name[40];
    

    printf("\n Enter Your Name :");
    gets(name);
    welcome(name);
    intro();
    do
    {
    for(int i = 0;i < 3;i++)
    {
    ch1=choice();
    chosen(ch1);
    rv=randomvariable();
    chosen1(rv);
    sc=score(ch1,(rv+1));
    if(sc == -1)
    {
        playerScore += 1; 
        CompScore  += 1;
        printf("\n\t\t...............................\n");
        printf("\t\t Your Score       : %d\n",playerScore);
        printf("\t\t...............................\n");
        printf("\t\t Computer's Score : %d\n",CompScore);
        printf("\t\t...............................\n");

    }
    else if(sc == 0)
    {
        CompScore += 1;
        printf("\n\t\t...............................\n");
        printf("\t\t Your Score       : %d\n",playerScore);
        printf("\t\t...............................\n");
        printf("\t\t Computer's Score : %d\n",CompScore);
        printf("\t\t...............................\n");
    }
    else if(sc == 1)
    {
        playerScore += 1;
        printf("\n\t\t...............................\n");   
        printf("\t\t Your Score       : %d\n",playerScore);
        printf("\t\t...............................\n");
        printf("\t\t Computer's Score : %d\n",CompScore);
        printf("\t\t...............................\n");
    }
    else if(sc == 2)
    {   
        printf("\n\t\t...............................\n");
        printf("\t\t: PLease Enter Valid Input..! :\n");
        printf("\t\t...............................\n");
    }

    }
    greater(playerScore,CompScore);
    ch2 = again();
    thanks(ch2,name);

    }
    while(ch2!=2);


getch();
return 0;
}