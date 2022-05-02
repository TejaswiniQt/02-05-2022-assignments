/*WAP to print fibanocci series using recursion*/


#include <stdio.h>

void fibonacci(int n);

int main()
{
        int n;
        printf("Enter the number of elements:");
        scanf("%d",&n);
        printf("Fibonacci series: %d %d ",0,1);
        fibonacci(n-2); ///n-2 because 2 numbers are already printed

        return 0;
}

void fibonacci(int n)
{
        static int n1=0,n2=1,n3;
        if(n>0)
        {
                n3 = n1 + n2;
                n1 = n2;
                n2 = n3;
                printf("%d ",n3);
                fibonacci(n-1);
        }
}