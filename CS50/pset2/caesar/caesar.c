#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if ((argc != 2) || !(atoi(argv[1]) > 0))
    {
        printf("Invalid. Please call key in positive numeric format with program.\n");
        return 1;
    } else {
        printf("plaintext: ");
        string x = get_string();
        int push = atoi(argv[1])%26;
        int length = strlen(x);
        char array[length];
        for (int i = 0; i < length; i++)
        {
            if (x[i] >= 'A' && x[i] <= 'Z')
            {
                if ((x[i] + push) > 'Z')
                {
                    array[i] = (x[i] + push - 26);
                } else {
                    array[i] = (x[i] + push);
                }
            } else if (x[i] >= 'a' && x[i] <= 'z')
            {
               if ((x[i] + push) > 'z')
                {
                    array[i] = (x[i] + push - 26);
                } else {
                    array[i] = (x[i] + push);
                } 
            } else {
                array[i] = x[i];
            }
        }
        printf("ciphertext: %s\n", array);
        return 0;
    }
}