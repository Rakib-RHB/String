#include<stdio.h>
int main ()
{
    char s[] = "Rakib Hasan Bhuiyan ";
    int vowel, con,i;
    vowel = 0;
    con = 0;
    while(s[i] != '\0')
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            vowel++;
        }
        else
        {
            con++;
        }
        i++;
    }
    printf("Rakib Hasan Bhuiyan \n");
    printf("Total Vowel : %d\n",vowel);
    printf("Total Consonent : %d\n",con);
}
