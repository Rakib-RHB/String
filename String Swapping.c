#include <stdio.h>
int main()
{
    char str1[]="Uap 22201096";
    char str2[]="Rakib Hasan Bhuiyan";
    char temp[500];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
    printf("The string value is str1 : \n%s \nstr2 : %s",str1,str2);


}
