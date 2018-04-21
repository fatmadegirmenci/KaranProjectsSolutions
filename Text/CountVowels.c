//Count Vowels - Enter a string and the program counts the number of vowels in the text.
//For added complexity have it report a sum of each vowel found.

#include <stdio.h>
#include <string.h>

void countVowels(char *str)
{
    int i, j, countA, countE, countI, countO, countU, sum;
    countA = countE = countI = countO = countU = sum = 0;

    for(i=0; i<strlen(str); i++)
    {
        if(str[i] == 'a' || str[i] == 'A')
        {
            countA++;
            sum++;
        }
        else if(str[i] == 'e' || str[i] == 'E')
        {
            countE++;
            sum++;
        }
        else if(str[i] == 'i' || str[i] == 'I')
        {
            countI++;
            sum++;
        }
        else if(str[i] == 'o' || str[i] == 'O')
        {
            countO++;
            sum++;
        }
        else if(str[i] == 'u' || str[i] == 'U')
        {
            countU++;
            sum++;
        }
    }

    printf("\nNumber of vovels: %d\n",sum);
    printf("Number of A : %d\n",countA);
    printf("Number of E : %d\n", countE);
    printf("Number of I : %d\n", countI);
    printf("Number of O : %d\n", countO);
    printf("Number of u : %d\n", countU);
}

int main()
{
    char str[500];

    printf("Enter a string: ");
    fgets(str,500,stdin);

    countVowels(str);

    return 0;
}
