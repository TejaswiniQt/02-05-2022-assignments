/*WAP to print factorial of a number using recursion*/

#include<stdio.h>

int fact(int n);

int main()
{
        int n,res;
        printf("Enter the number:");
        scanf("%d",&n);
        res=fact(n);
        printf("Factorial of %d is %d\n",n,res);
        return 0;
}

int fact(int n)
{
        int res;
        if(n==0)
                res=1;
        else
                res=(n*fact(n-1));
        return res;
}