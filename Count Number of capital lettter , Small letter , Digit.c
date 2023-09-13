#include <stdio.h>
int main ()
{
    char str[1000];
    printf("Enter the String : ");
    gets(str);
    int cap, sm, dig, i, ch;
    i = 0;
    cap = 0;
    sm = 0 ;
    dig = 0;
    while((ch = str[i]) != '\0')
    {
        if(ch >= 65 && ch <= 90)
        {
            cap ++;
        }
        else if(ch >= 97 && ch <= 122 )
        {
            sm++;
        }
        else if (ch >= 48 && ch <= 57)
        {
            dig++;
        }


       i++;
    }
    printf("The string is : %s\n",str);
    printf("Total Capital is : %d\n",cap);
    printf("Total Consonent is : %d\n",sm);
    printf("Total Digit  is : %d\n",dig);




}
