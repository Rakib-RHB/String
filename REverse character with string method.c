#include <stdio.h>
int main()
{
    char str[1000];
    printf("Enter the string :");
    gets(str);
    int d;
    d = strrev(str);
    printf("The String is reverse is : %s\n",d);


    // FRIST TIME the character reverse , and str2[] the str[] reverse resul again reverse//


    // now we find in normal way//

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
    printf("str2[j] : %s\n",str2);
}
