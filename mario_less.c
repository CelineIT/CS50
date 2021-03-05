#include <stdio.h>
#include <cs50.h>

int main(void)

{
    // get int n between 1 and 8
    int n;

    do
    {
        n = get_int("height: ");
        
    }    
    while (n<1 || n>8);
    
    // height
     for (int i = 0; i < n; i++)
     {
     // space
      for (int s = n - 1; s>i; s--)
     {
     printf(" ");
     }
     // # hashtag
    for (int h = -1; h < i; h++)
{
printf("#");
}
printf("\n");
}
}