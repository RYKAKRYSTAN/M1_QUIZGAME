#include<stdio.h>
#include<stdlib.h>
void highscore()  
{  
  
    int ch;  
  
    
         
  
    printf("\n******************************* HIGH SCORES *******************************\n\n");  
    printf("NAME     POINTS     RATING\n");  
    
    
    printf("\nContinue playing ? (1 - Yes and 0 - No) :  ");  
    scanf("%d",&ch);  
  
    if(ch==1)  
    {  
        start();  
    }  
    else  
    {  
        exit(1);  
    }  
    
  
}  
