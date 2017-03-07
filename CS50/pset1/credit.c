#include <cs50.h>
#include <stdio.h>

void check(long long n);
int count(long long n);

int main(void)
{
    printf("Number: ");
    long long n = get_long_long();
    check(n);
    return 0;
}

void check(long long n)
{
    int c = count(n);
    int numberArray[c];
    for (int i = 0; i < c; i++)
    {
        numberArray[i] = n%10;
        n /= 10;
    }
    
    int total[c/2];
    int totalLength = 0;
    int base = 0;
    for (int i = 0; i < c; i += 2)
    {
        base += numberArray[i];
        if (i+2 <= c)
        {
            total[i/2] = (numberArray[i+1] * 2);
            totalLength++;
        }
    }

    int totalArray[2];
    int add = 0;
    for (int i = 0; i < totalLength; i++)
    {
        if (total[i] > 9)
        {
            int num = total[i];
            for (int ii = 0; ii < 2; ii++)
            {
                totalArray[ii] = num%10;
                num /= 10;
                add += totalArray[ii];
            }
        }
        else 
        {
            add += total[i];
        }
    }
    
    base += add;

    if (base%10 == 0)
    {
        if (numberArray[c-1] == 3)
        {
            printf("AMEX\n");
        }
        else if (numberArray[c-1] == 5)
        {
            printf("MASTERCARD\n");
        }
        else if (numberArray[c-1] == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}

int count(long long n)
{
    int count = 0;
    while(n != 0)
    {
        // n = n/10
        n /= 10;
        ++count;
    }
    return count;
}