/* CS50 pset01 - mario.c
Carlos F. Antonio 
fulvio.ac@gmail.com
SDQ Dominican Republic
02/23/2014 */

#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main (void)
{
    //Variables
    float amount = 0;
    int cents = 0;
    int quartercount = 0;
    int dimecount = 0;
    int nickelcount = 0;
    int pennies = 0;
    int coincount = 0;
    
    do
    {
        printf("Input a float valor (0.00): ");
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
    
    // Pennies
    coincount = quartercount + dimecount + nickelcount + pennies;

        //condition for  plural
        char string[] = "s";

        if (coins = 1 || quarters = 1 || dimes= 1 || nickels = 1 || pennies = 1)
        {
        // printing result of count coins
        printf("You will get %d coin%s: %d quarter%s, %d dime%s, %d nickel%s and %d pennie%s.\n", 
            coincount, quartercount, dimecount, nickelcount, pennies, string);
        }
        return 0;
}
