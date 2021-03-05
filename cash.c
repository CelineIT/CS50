#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{

float change;
do
{
// prompt how much change does the person need
      change = get_float("How much change do you need?\n$");
}
while (change < 0);



// round up change from dollars to cents
int cents = round(change * 100);

// define coins
int numberofcoins = 0;
int q = 25;
int d = 10;
int p = 5;
int n = 1;

// do while loop to know how many coins we need to give back

do
{
if (cents >= 25)
 {
    numberofcoins += cents / 25;
    cents %=  25;
}

if (cents >= 10)
 {
    numberofcoins += cents / 10;
    cents %=  10;
}

if (cents >= 5)
 {
    numberofcoins += cents / 5;
    cents %= 5;
}

if (cents >= 1)
 {
    numberofcoins += cents / 1;
    cents %= 1;
}
}
while(cents < 0);

// show how many coins we need to give back
{
    printf("coins %i\n", numberofcoins);
}
}