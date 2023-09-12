#include <stdio.h>
int main()
{
    char s[]="w3resource.com";
    int i;
    while(s[i] != '\0')
    {
        printf("%c ",s[i]);
        i++;
    }
    int length;
    length = strlen(s);
    printf("\nLength : %d\n",length);
    return 0;
}
