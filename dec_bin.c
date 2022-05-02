/* WAP to convert a decimal number to binary using recursion*/
#include <stdio.h>

int dec_bin(int n);

int main()
{
        int n;
        printf("Enter the number:");
        scanf("%d",&n);
        printf("%d", dec_bin(n));
        printf("\n");
        return 0;
}

int dec_bin(int n)
{
        if (n == 0)
                return 0;
        else
                return (n % 2 + 10 * dec_bin(n / 2));
}