/* Write down a program that
searches for a letter in a
sentence. Both letter and
sentence will be input to
your program. Print last
position of the letter found
in the sentence.*/





#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],n;
    int length, len , i;
    printf("Enter the String : ");
    gets(str);
    length = strlen(str);
    printf("Which letter : ");
    scanf("%c",&n);
    len = -1;
    for (i = 0 ;i < length;i++)
    {
        if(str[i] == n)
        {
            len = i;
        }
    }
    if (len == -1)
    {
        printf("Not found");
    }
    else
    {
        printf("This Letter Found at possition : %d",len);
    }
    return 0;



}
