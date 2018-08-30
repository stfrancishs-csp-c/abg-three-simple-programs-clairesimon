/*
Claire Simon
Mr. Chamberlin
AP CS50
29 August 2018
*/

#include <stdio.h>
int main(void)
{
 float a, b;

 printf ("How much of a bonus did you get?");
    scanf (" %f", &a);
    b=.85 * a;
printf ("If you give 15 percent to your charity, you will still have %.2f", b);

return 0;
}