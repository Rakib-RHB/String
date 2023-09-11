#include <stdio.h>
int main ()
{
    char ch[] = {'H','E','L','L','O','\0'};
    printf("%s\n",ch);


    char ch1[] = "RAKIB HASAN BHUIYAN ";
    printf("%s\n\n",ch1);


    char name[10000];
    /* scanf not collect (_) ;
    so we use gets  ;*/

    gets(name);
    printf("%s",name);
}
