#include <stdio.h>
#include <string.h>

int isPalindrome(char *str)
{
    int len = strlen(str), i, counter = 0;

    for(i=0;i<len/2;i++)
    {
        if(str[i] == str[len-i-1])
        {
            counter++;
        }
    }

    if(counter == len/2)
        return 1;
    else
        return 0;
}

int main()
{
    char str[200];

    printf("Enter a string: ");
    fgets(str,200,stdin);

    str[strlen(str)-1] = '\0';

    if(isPalindrome(str))
        printf("\nThe string is a palindrome.\n");
    else
        printf("\nThe string is not a palindrome.\n");

    return 0;
}
