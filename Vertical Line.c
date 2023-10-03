/*Write down a program that
will print letters of a
sentence in a vertical line.
Add delay as needed*/



#include<stdio.h>
#include<string.h>
#include<windows.h> // This Header file use for sleep;
int main()
{
    char str[100];
    int i = 0;
    printf("Enter The String :");
    gets(str);
    printf("The vertical line is :\n");
    while(str[i] != '\0')
    {
        printf(" %c\n",str[i]);
        Sleep(300); // Output slow Show.

        i++;
    }


}
