#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "cat";
    char str2[] = "cat";
    int x = strcmp(str1, str2);
    if(x == 0)
    {
        printf("They are same") ;
    }
    else if (x < 0)
    {
        printf("s1 comes before s2") ;
    }
    else if (x > 0)
    {
        printf("s1 comes after s2") ;
    }


    printf("\n\n");
    char s1[] = "cat";
    char s2[] = "cat";
    char s3[] = "dog";
    int i;
    i = strcmp(s1,s3);
    if (i == 0)
    {
        printf("The are same\n");
    }
    else if (i < 0)
    {
        printf("S1 comes before S3\n");
    }
    else if (i > 0)
    {
        printf("S1 comes after S3\n");
    }
    printf("\n\n");
// this string compare only strcmp;
    char s11[ ] = "cat";
    char s12[] = "Cat";
    char s13[] = "dog";
    int x1 = strcmp(s11, s12) ;
    if(x1 == 0)
    {
        printf("They are same") ;
    }
    else if (x1 < 0)
    {
        printf("s1 comes before s2") ;
    }
    else if (x1 > 0)
    {
        printf("s1 comes after s2") ;
    }
    // Using (cmpi) : i => means [string compare not their capital or small letter ] totally compare their value;   return 0;
    printf("\n\n");

    char s111[ ] = "cat";
    char s112[] = "Cat";
     char s113[] = "dog";
    int x11 = strcmpi(s111, s112) ;
    if(x11 == 0)
    {
        printf("They are same") ;
    }
    else if (x11 < 0)
    {
        printf("s1 comes before s2") ;
    }
    else if (x11 > 0)
    {
        printf("s1 comes after s2") ;
    }

}
