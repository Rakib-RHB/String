/* Write down a program that
searches for a letter in a
sentence. Both letter and
sentence will be input to
your program. Print First
position of the letter found
in the sentence. */


#include<stdio.h>
#include<string.h>
int main()
{
    char str[80];
    char t;
    int i,len,p= -1;
    printf("Enter a sentence : ");
    gets(str);
    printf("Which letter of found : ");
    scanf("%c",&t);
    len = strlen(str);
    for(i = 0; i < len ; i++)
    {
        if(t == str[i])
        {
            p = i;
            break;
        }
    }
    if(p == -1)
    {
        printf("The character not found !");
    }
    else
    {
        printf("The position is : %d",p);
    }
    return 0;

}

