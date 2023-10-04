/*Write down a program that
searches for a word in a
sentence. Both word and
sentence will be input to
your program. Print first
position of the word found
in the sentence.*/


#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter A Sentence : ");
    gets(str);
    char w;
    printf("Which word !  => ");
    scanf("%c",w);
    int i = 0,p;
    p = -1;
    while( str[i] != '\0')
    {
       if(str[i] == w)
       {
           p = i;
       }
       i++;
    }
    if (p == -1)
    {
        printf("Sorry Not Found ");
    }
    else
    {
        printf("Found at possition : %d",p);
    }
}

