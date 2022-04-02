#include<stdio.h>
#include<stdlib.h>
void main()
{
   system("cls");
    int ch;
    printf("PRESS 1 TO START THE GAME\nPRESS 2 FOR HIGH SCORES\n PRESS 3 FOR INSTRUCTIONS\nPRESS 0 TO EXIT");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        start();
        break;
        case 2:
        highscore();
        break;
        case 3:
        help();
        break;
        default: 
        exit(1);
        }
        getchar();
}
