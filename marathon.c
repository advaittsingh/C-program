/*
program to find the distance in kilometer
*/

#include <stdio.h>

int main(void)
{
    int miles, yards;
    printf("enter the value for miles and yards");
    scanf("%d%d", &miles, &yards);
    double kilometers;
    kilometers = 1.609 * (miles + yards / 1760.0);
    printf("\n A marathon is %lf kilometers.\n\n", kilometers);
    return 0;
}