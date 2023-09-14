#include<stdio.h>
int main()
{
    char s1[] = "Abcrsdfa";
    char s2[] = "America";
    strupr(s1);
    strlwr(s2);
    printf("Upper : %s\n",s1);
    printf("Lowwer : %s",s2);
}
