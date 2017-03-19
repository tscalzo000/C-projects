#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
    string s = get_string();
    if (s != NULL)
    {
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            if ( i == 0 && ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')))
            {
                printf("%c", toupper(s[i]));
            }
            else if ((i+1 < n) && (s[i] == ' ') && (s[i+1] != ' '))
            {
                printf("%c", toupper(s[i+1]));
            }
        }
        printf("\n");
    }
}
