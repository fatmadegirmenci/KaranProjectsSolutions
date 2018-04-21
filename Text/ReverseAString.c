//Enter a string and the program will reverse it and print it out.

#include <stdio.h>
#include <string.h>

void reverseString (char *string)
{
    char reverse[500];
    int lenString = strlen(string), i;

    reverse[lenString] = '\0';

    for(i=0; i<lenString; i++)
    {
        reverse[i] = string[lenString-i-1];
    }

    printf("\nReverse of the string: %s \n", reverse);
}

int main()
{
    char string[500];

    printf("Enter a string: ");
    fgets(string,500,stdin);
    string[strlen(string)-1] = '\0';

    reverseString(&string);

    return 0;
}
