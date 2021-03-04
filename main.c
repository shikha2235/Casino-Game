#include <stdio.h>
#include <stdlib.h>
int play(int* cash, int bet){
        char c[3]={'j', 'q','k'};
        printf("shuffeling......\n");
        srand(time(NULL));
        int i;
        for(i=0;i<5;i++){
            int x=rand()%3;
            int y= rand()%3;
            int temp=c[x];
            c[x]=c[y];
            c[y]=temp;
        }

    int playersguess;
    printf("enter the position of queen= 1,2 or 3?.... ");
    scanf("%d",&playersguess);
    if( c[playersguess-1]=='q'){
        printf("congratulations you win  ");
        *cash=*cash+3*bet;
    }
    else{
            printf("sorry you loose  ");
        *cash=*cash -bet;}
        printf("now you have%d\n",*cash);

}
int main()
{
   printf("welcome to casino\n");
   int cash;
   printf("how much amount do you have\n");
   scanf("%d",&cash);
   while(cash>0){
       int bet;
       printf("what is your bet amount?....\n");
       scanf("%d",&bet);
       if(bet==0 || bet>cash){
        printf("you dont have enough money\n");
       }else{
       play(&cash,bet);
       }
   }

}
