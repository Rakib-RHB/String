
#include <stdio.h>
int main()
{
    char s1[]="Rakib";
    char s2[]=" Hasan";
    strcat(s1,s2);
    printf("The result is : %s\n",s1);
    char str1[]="Rakib Hasan ";
    char str2[]="Bhuiyan";
    int i=0, len =0,j = 0;
    while(str1[i] != '\0')
    {
        i++;
        len++;
    }
    while(str2[j] != '\0')
    {
        str1[len + j] = str2[j];
        j++;
    }
        printf("%s",str1);

}
