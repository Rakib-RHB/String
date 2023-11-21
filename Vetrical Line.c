/* Write down a program that
will print letters of a
sentence in a vertical line.
Add delay as needed.  */

#include<windows.h>
int main ()
{
    char str[80];
    int i , len;
    printf("Enter a sentence : ");
    gets(str);
    len = strlen(str);
    for(i = 0; i < len ; i++)
    {
        printf(" %c\n",str[i]);
        Sleep(300);

    }
}

