#define _XOPEN_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Invalid. Please enter one argument.\n");
        return 1;
    }
    string password = argv[1];
    char salt[3] = { password[0], password[1] };
    char array[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i = 0; i < 53; i++)
    {
        for(int j = 0; j < 53; j++)
        {
            for(int k = 0; k < 53; k++)
            {
                for(int l = 0; l < 53; l++)
                {
                    char word[5] = { array[i], array[j], array[k], array[l] };
                    string coded = crypt(word, salt);
                    if (strcmp(coded, password) == 0)
                    {
                        printf("%s\n", word);
                        return 0;
                    }
                }
            }
        }
    }
}