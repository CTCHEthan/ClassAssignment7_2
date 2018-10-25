#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_CHAR 50

int main()
{

    printf("Enter some text  ");

    char enteredText[MAX_CHAR];
    gets(enteredText);

    int a, digitCounter;

    digitCounter = 0;

    for (a = 0; a < MAX_CHAR; a++)
    {
        int currentChar = enteredText[a];

        if ( isdigit(currentChar) )
        {
            digitCounter++;
        }


    }

    printf("Encountered %d digits.", digitCounter);

    return 0;
}
