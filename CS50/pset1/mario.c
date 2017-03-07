#include <cs50.h>
#include <stdio.h>

void pyramid(int n);

int main(void)
{
    while(true)
    {
        printf("Height: ");
        int n = get_int();
        if ((n > -1) && (n < 24))
        {
            pyramid(n);
            return false;
        }
    }
}

void pyramid(int n)
{
    for(int i = 0; i < n; i++)
    {
        for (int ii = 0; ii < (n-(i+1)); ii++)
        {
            printf(" ");
        }
        for (int ii = 0; ii < i+1; ii++)
        {
            printf("#");
        }
        printf("  ");
        for (int ii = 0; ii < i+1; ii++)
        {
            printf("#");
        }
        printf("\n");
    }
}