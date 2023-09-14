#include <stdio.h>
int main ()
{
    char str1[1000];
    char str2[500];
    printf("Enter String [1] value to compare :");
    gets(str1);
    printf("Enter String [2] value to compare :");
    gets(str2);
   // Using normal method//

    int i = 0, j = 0, s1 = 0, s2 = 0;
    while(str1[i] != 0)
    {
        i++;
        s1++;
    }
    while(str2[j] != 0)
    {
        j++;
        s2++;
    }
    if(s1 == s2)
    {
        printf("The string is equal\n");
    }
    else
    {
        printf("Not equal\n");
    }

    // Using string method //


    int d = strcmp(str1,str2);/* string compare value denoted [strcmp]*/
    if(d == 0)
     {
        printf("The string is equal\n");
    }
    else
    {
        printf("Not equal\n");
    }


}
