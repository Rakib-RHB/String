/* Write down a program that
prints how many times a
letter appeared in a
sentence. Both letter and
sentence will be input to
your program.*/



#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],n;
    int length, count, i;
    printf("Enter the String : ");
    gets(str);
    length = strlen(str);
    printf("Which letter : ");
    scanf("%c",&n);
    count = 0;
    for (i = 0 ; i < length; i++)
    {
        if(str[i] == n)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("Not found");
    }
    else
    {
        printf("This Letter Found : %d times .",count);
    }
    return 0;



}





