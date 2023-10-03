/*Write down a program that
will print n-th letter in a
sentence entered by a user.
n will be input to your
program*/


#include<stdio.h>
#include<string.h>

int main()
{
   char str[100];
    int n,length ;
    printf("Enter the String value : ");
    gets(str);
    length = strlen(str);
    printf("Length : %d\n",length);
    printf("Please Enter Nth Value between 0 to %d\n",length);
    printf("Which Position? : ");
    scanf("%d",&n);
    if(n < length)
    {
        printf("The letter is : %c",str[n]);

    }
    else
    {
        printf("No letter at such position\n");
    }

}
