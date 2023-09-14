
#include <stdio.h>
int main()
{
    char str[1000];
    printf("Enter the string :");
    gets(str);

    char str2[500];
    int i = 0, len = 0, j =0;
    while(str[i] != '\0')
    {
        i++;
        len ++;

    }
    for( j = 0, i = len -1; i >= 0; i--,j++ )
    {
        str2[j] = str[i];
    }
    str2[j] = '\0';
   // printf("str2[j] : %s\n",str2);
    int d;
    d = strcmp(str,str2);
    if (d == 0)
    {
        printf("The String is Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
}
