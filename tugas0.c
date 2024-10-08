/* This program adds two integer numbers */
#include <stdio.h>
int main()
{
    int a, b, sum;                           /* Deklarasi Variabel */
    printf("enter first integar\n");         /* prompt the user */
    scanf("%d" , &a);                        /* read first integer */
    printf("enter second integer\n");        /* prompt the user */
    scanf("%d" , &b);                        /* read second integer */
    sum = a+ b;                              /* calculate the sum */
    printf("sum = %d\n", sum);               /* printf the calculate sum */
    return 0;                                /* indicate that program ended successfully */
}