
#include <stdio.h>
#include <string.h>
void main(void)
{
    char string1[]="spark",string2[]="SPArk";
    int cmp;
    cmp=strcmpi(string1,string2);
    if(cmp>0)
        printf("%s > %s",string1,string2);
    else
    {
        if(cmp<0)
            printf("%s < %s",string1,string2);
        else
            printf("%s = %s",string1,string2);
    }
}
