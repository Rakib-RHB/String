
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Camel_Case(char *input)
{
    int length = strlen(input);
    int Space = 0;

    for (int i = 0; i < length; i++)
    {
        if (Space || i == 0)
        {
            input[i] = toupper(input[i]);
            Space = 0;
        }
        else
        {
            if (input[i] == ' ')
            {
                Space = 1;
            }
            else
            {
                input[i] = tolower(input[i]);
            }
        }
    }
}

int main()
{
    char input[1000];
    gets(input);
    input[strcspn(input, "\n")] = '\0';

    Camel_Case(input);

    printf("%s\n", input);

    return 0;
}
