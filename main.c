#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("PotOdds V1: A simple cmd poker calculator\n");

    int bet;
    int pot;

    double odds;

    for(;;)
    {
     printf("***********>-----POT ODDS-----<***********\n");
     printf("**********************************************\n");

     printf("Bet to call: \n");
     scanf("%d", &bet);

     printf("Pot: \n");
     scanf("%d", &pot);

     odds = (double)bet/(bet + pot)*100;

     printf("---------------------\n");
     printf("| %f percent |\n",odds);
     printf("---------------------\n");

    }

}
