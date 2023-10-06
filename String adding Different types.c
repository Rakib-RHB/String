#include<stdio.h>
#include<string.h>
int main()
{
    // Use 2 string ;
    char s[20] = "HELLO";
    char sr[20] = " WORLD";
    strcat(s,sr);
    printf("%s",s);
    printf("\n\n");
    // Use n number of string for add ;
    char s1[30] = "";
    char s2[30] ="Happy ";
    strncat(s1, s2, 6);
    printf("%s",s1);
    printf("\n\n");

    // Quize Question;
    char str1[30] = "Happy";
    char str2[30] = " New Year";
    char str3[30] = "";
    strcat(str1,str2);
    strcpy(str3,"");
    strncat(str3,str1,6);
    strcat(str3,str1);
    printf("%s",str3);
    printf("\n\n");

    return 0;





}
