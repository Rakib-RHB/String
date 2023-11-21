/* Write down a program that
will print n-th letter in a
sentence entered by a user.
n will be input to your
program  */



#include<stdio.h>
#include<string.h>
int main()
{
    char str[80];
    int i,len,p;// (p) menans : Position .
    gets(str);
    len = strlen(str);
    printf("Which Position : ");
    scanf("%d",&p);
    if ( p > len-1)
    {
        printf("Don't match any Character\n");
    }
    else
    {
        printf("This position letter is : %c",str[p]);
    }

}
