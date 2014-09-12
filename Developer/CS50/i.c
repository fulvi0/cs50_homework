/* CS50 pset01 - mario.c
Carlos F. Antonio - fulvio.ac@gmail.com
SDQ Dominican Republic - 02/23/2014 */

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main (void)
{
    //Declare variables
    float amount;
    int cents, quartercount, dimecount, nickelcount, pennies, coincount;

    //Assing value to variables
    amount =0;
    cents = 0;
    quartercount = 0;
    dimecount = 0;
    nickelcount = 0;
    pennies = 0;
    coincount = 0;

    //Ask to the user for a float value (.00)
    do
    {
        printf("Input a float value (.00): ");
        amount = GetFloat();
    }
    
    while(amount <= 0);
    
    // amount is convert to cents
    cents = (int)round(amount*100);

    // Quarters 
    quartercount = cents / 25;
    pennies = cents % 25;
    
    // Dimes
    dimecount = pennies / 10;
    pennies = pennies % 10;
    
    // Nickels
    nickelcount = pennies / 5;
    pennies = pennies % 5;
    
    // Coins counter
    coincount = quartercount + dimecount + nickelcount + pennies;
    
    // printing result of counting coins
    printf("You will get %d coins:\n %d Quarters\n %d Dimes\n %d Nickels\n %d Pennies\n\n", 
            coincount, quartercount, dimecount, nickelcount, pennies);
return 0;
}
