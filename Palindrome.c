/*Write down a program that
will take a word as input and
will determine whether the
word is palindrome or not. A
palindrome is a word that
reads the same backward as
forward*/



#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    gets(str1);
    char str2[100];
    int len, o =0;
    while(str1[o]!= '\0')
    {
        o++;
        len++;
    }
    int i,j,c ;
    j = 0;
    for(i = len -1; i >= 0; i--)
    {
        str2[j] = str1[i];
        j++;
    }
    for(i = 0; i < len ; i++)
    {
        if(str1[i] == str2[i])
        {
            c++;
        }
    }
    if(c == len)
    {
        printf("Palindrom");
    }
    else
    {
        printf("Not Palindrom");

    }





}
