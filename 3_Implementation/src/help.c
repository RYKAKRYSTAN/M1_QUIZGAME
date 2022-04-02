#include<stdio.h>
#include<stdlib.h>
int help()
{
    int ch;
    printf("******* INSTRUCTIONS*******");
    printf("\n1.THE QUESTIONS ARE BASED ON GENERAL KNOWLEDGE\n");
    printf("2.\nFROM THREE OPTIONS CHOOSE THE BEST ONE\n");
    printf("3.\nTHERE WILL BE FIVE QUESTIONS CARRYING 3 MARKS\n");
    printf("4.\nTHERE IS NO NEGATIVE MARKING\n");
    printf("\n****** ALL THE BEST ******");
printf("\n TO CONTINUE PLAYING PRESS 1\n TO EXIT PLAYING PRESS ANY NUMBER EXCEPT 1");
scanf("%d",&ch);
if(ch==1)
{
    start();
}
else{
    exit(1);
}
return 3;
}
  
