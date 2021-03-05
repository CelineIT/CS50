#include <stdio.h>
#include <cs50.h>

int main(void)

{
// get int n between 1 and 8
    int height;

    do
    {
        height = get_int("height: ");

    }
    while (height<1 || height>8);

// height
     for (int i = 0; i < height; i++)
     {

// space
      for (int  s = height - 1; s>i; s--)
     {
         printf(" ");
     }

// # hashes
    for (int h = -1; h < i; h++)
{
printf("#");
}

// print gap between hashes
{
    printf("  ");
}

// # hashes
    for (int h = -1; h < i; h++)
{
printf("#");
}


printf("\n");
}
}