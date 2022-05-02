/*WAP to reverse a string using recursion*/

#include<stdio.h>

void reverse(char *str);

int main()
{
        char a[50];
        printf("Enter the string:");
        scanf("%[^\n]%*c",a);
        reverse(a);
        printf("\n");
        return 0;
}

void reverse(char *str)
{
        if (*str)
        {
                reverse(str+1);
                printf("%c", *str);
        }
}