#include <stdio.h>
int main()
{
    char str[1000];
    printf("Enter the string : ");
    gets(str);
    int i, vowel, con, dig, word, other, ch;
    i = 0;
    vowel = 0;
    con = 0;
    dig = 0 ;
    word = 0;
    other = 0;



    while((ch = str[i] )!= '\0')
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o'|| ch == 'u'||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O'|| ch == 'U')
        {
            vowel++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            con++;
        }
        else if(ch >= '0' && ch <= '9')
        {
            dig++;
        }
        else if ( ch == ' ' || ch == '\n' || ch == '\t')
        {
            word++;
        }
        else
        {
            other ++;
        }
        i++;
    }
    word++;
        printf("The string is : %s\n",str );
        printf("The total Vowel is : %d\n",vowel );
        printf("The total Consonent is : %d\n",con );
        printf("The  total Digit is : %d\n",dig );
        printf("The  total word is : %d\n",word );
        printf("Other : %d",other);




}
