#include <stdio.h>
#include <string.h>
int main( )
{
    char str[20] = "BeginnersBook";
    strlwr(str);
    printf("The lower case of this string is : %s\n",str);
    char s[100];
    printf("Enter the string : ");
    gets(s);
    strlwr(s);
    printf("The lower case of this string is : %s",s);
    printf("\n\n");
    printf("Now for Upper case");

    char str1[20] = "BeginnersBook";
    strupr(str1);
    printf("The Upper case of this string is : %s\n",str1);
    char s1[100];
    printf("Enter the string : ");
    gets(s1);
    strupr(s1);
    printf("The Upper case of this string is : %s\n",s1);

    printf("\n\n");
    printf("Now for Reverse : ");

    char str2[20] = "DRAWER";
    strrev(str2);
    printf("%s",str2);
    printf("\n\n");


    printf("Now Copy to string is : ");
    char s3[30] = "Bad";
    char s2[30] = "Good";
    strcpy(s3, s2);
    printf("%s",s3);


    printf("\n\n");
        printf("Now Copy to string is : ");


    char s4[30] = "Bad";
    char s5[30] = "Good";
    strcpy(s5, s4);
    printf("%s",s5);






    return 0;
}

