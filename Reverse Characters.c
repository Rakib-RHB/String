#include <stdio.h>
int main()
{
    char s[] ="RAKIB HASAN BHUIYAN";
    int i, len;
    len = strlen(s);
    for(i = len; i >= 0; i--)
    {
       printf("%c ",s[i]);
    }
    printf("\n\n");
    return 0;
}
