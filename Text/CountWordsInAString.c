#include <stdio.h>
#include <string.h>

int CountWords (char *str)
{
    int i, counter = 1; // for first word

    for(i=0; i<strlen(str); i++)
    {
        if(str[i] == ' ')
        {
            counter++;
        }
    }
    return counter;
}

int main()
{
    char str[200];

    printf("Enter a string: ");
    fgets(str,200,stdin);
    str[strlen(str)-1] = '\0';

    printf("\nThere are %d words in the string.\n", CountWords(str));

    return 0;
}
