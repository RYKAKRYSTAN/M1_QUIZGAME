#include<stdio.h>
#include<stdlib.h>
int start()
{
    int ans;
    int count=0;
    char rating[20];
    
  
  
        printf("\nNAME OF THE PLAYER: ");  
        scanf("%s",p.name);  
  
    
  
        printf("***** WELCOME \"%s\"***** \n\n", p.name);  
  
  
        printf("Q(1) The study of inscets is called: \n 1) Entamology 2) Hydrology\n 3) Sociology \n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
  
        if(ans==1)  
        {  
            printf("YOUR ANSWER IS CORRECT \n\n");  
            ++count;  
  
        }  
        else  
        {  
            printf("WRONG ANSWER!!THE CORRECT ANSWER IS OPTION 1");  
        }  
  
        printf("Q(2) Name the first president of India ?\n 1) Jawaharlal Nehru \n 2) Indira Gandhi \n 3) Rajendra Prasad\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
  
        if(ans== 3)  
        {  
            printf("YOUR ANSWER IS CORRECT!! \n\n");  
  
                ++count;  
  
        }  
        else  
        {  
            printf("WRONG ANSWER !! THE CORRECT ANSWER IS OPTION 3\n\n");  
        }  
  
        printf("Q(3) Name the largest continent ?\n 1)Africa\n 2) Asia \n 3)Australia\n\n");  
  
        printf("Your answer: ");  
        scanf("%d",&ans);  
  
        if(ans==2)  
        {  
            printf("YOUR ANSWER IS CORRECT!!\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("WRONG ANSWER !! THE CORRECT ANSWER IS OPTION 2\n\n");  
        }  
  
  
        printf("Q(4).Which state is called as GOD'S OWN COUNTRY ? \n 1) Gujarat\n 2) Assam\n 3) Kerela \n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==3)  
        {  
            printf("YOUR ANSWER IS CORRECT\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("WRONG ANSWER!! THE CORRECT ANSWER IS OPTION 3\n\n");  
        }  
  
        printf("Q(5).Which is the major hub for IT industry in India? \n 1) Mumbai\n 2) Gujarat \n 3) Bangalore\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==3)  
        {  
            printf("YOUR ANSWER IS CORRECT!!\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("WRONG ANSWER !! THE CORRECT ANSWER IS OPTION IS 3\n\n");  
        }  
  
        printf("Q(6)Name the world's longest river ?\n1) Nile \t2) Mississipi \n3)Congo\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)  
        {  
            printf("YOUR ANSWER IS CORRECT!!\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("WRONG ANSWER!! THE CORRECT ANSWER IS OPTION 1\n\n");  
        }  
  
        printf("Q(7). FFC stands for \n1)Foreign Finance Corporation\n2)Film Finance Corporation\n3)Federation of Football Council\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==2)  
        {  
            printf("YOUR ANSWER IS CORRECT!!\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("WRONG ANSWER!! THE CORRECT ANSWER IS OPTION 2\n\n");  
        }  
  
        printf("Q(8).Where is Bose Institute \n1) Kolkata\n2) Bombay \n3) Indore\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)  
        {  
            printf("YOUR ANSWER IS CORRECT!!\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("WRONG ANSWER!! THE CORRECT ANSWER IS OPTION 1\n\n");  
        }  
  
        printf("Q(9). Epsom (England) is the place associated with \n1)Horse racing\n2)Polo\n3)Shooting\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)  
        {  
            printf("YOUR ANSWER IS CORRECT!!\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("WRONG ANSWER!! THE CORRECT ANSWER IS OPTION 1\n\n");  
        }  
  
        printf("Q(10). When is International Yoga day celebrated? \n1)June 21\n3)March 21\n3) September 1\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)  
        {  
            printf("Your answer is correct!!\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("WRONG ANSWER THE CORRECT OPTIN IS 1\n\n");  
        }  
//counting number of correct answers and, ratings  
        if(count > 0)  
        {  
                printf("Thanks for playing, Your scored: %d points \t", count*5);  
  
                p.score=count*3;  
  
                if(p.score >= 25)  
                {  
                    printf("Rating: * * * * *");  
                    p.rat=5;  
                }  
                else if(p.score >= 20 && p.score < 25)  
                {  
                    printf("Rating: * * * *");  
                    p.rat=4;  
                }  
                else if(p.score >= 15 && p.score < 20)  
                {  
                    printf("Rating: * * *");  
                  p.rat=3;  
                }  
                else if(p.score >= 10 && p.score < 15)  
                {  
                    printf("Rating: * *");  
                    p.rat=2;  
                }  
                else if(p.score < 10)  
                {  
                    printf("Rating: *");  
                     p.rat=1;  
                }  
  
             
  
                   
        }  
        else  
        {  
            printf("Try again!");  
        }  
  return 7;
}
  
