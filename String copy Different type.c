#include <stdio.h>
#include <string.h>
int main() {
// Two variable copy ;
char s1[30] = "Bad";
char s2[30] = "Good";
strcpy(s1, s2);
printf("%s",s1);
printf("\n\n");
char s3[30] = "Bad";
char s4[30] = "Good";
strcpy(s4, s3);
printf("%s",s4);
printf("\n\n");


// just nth number  of copy ;

char s11[30] = "Coastal";
char s12[30] = "Cry";
strncpy(s11, s12,3);// use any number between 3-30;if the value use under 3 , the out will be changed.
printf("Nth number of copy : %s",s11);
printf("\n\n");


char so1[30] = "Coastal";
char so2[30] = "Cry";
strncpy(so1, so2,6);// use any number between 3-30;if the value use under 3 , the out will be changed.
printf("Nth number of copy : %s",so1);
printf("\n\n");



return 0;
}
