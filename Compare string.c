
#include <stdio.h>
int main()
{
    char s1[]="asasdf";
    char s2[]="aassdd";
    int flag=0;
    while (s1 != '\0' || s2 != '\0' )
    {
        if(s1 == s2)
        {
            s1= s1+1;
            s2=s2+1;
        }
        else if ((s1 == '\0' && s2 != '\0') || (s1 != '\0' && s2 == '\0') || s1 != s2)
        {
            flag = 1;
            break;
        }
    }
          if (flag == 0)
          {
              printf("\nStrings are equal.\n");
          }
          else if(flag == 1)
          {
              printf("\nStrings are not equal.\n");
          }
          return 0;


}
