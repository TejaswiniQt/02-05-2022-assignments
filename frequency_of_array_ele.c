/*Write a C program to count frequency of each element in an array*/

#include<stdio.h>

void frequency(int *a,int *b,int n);
void print(int *a,int *b,int n);

int main()
{
        int a[100],b[100],n,i;
        printf("Enter the size of array: ");
        scanf("%d",&n);
        printf("Enter the elements of the arry: ");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
                b[i]=-1;
        }
        frequency(a,b,n);
        print(a,b,n);
        return 0;
}

void frequency(int *a,int *b,int n)
{
        int i,j,c=0;

        for(i=0;i<n;i++)
        {
                c=1;
                for(j=i+1;j<n;j++)
                {
                        if(a[i]==a[j])
                        {
                                c++;
                                b[j]=0;
                        }
                }
                if(b[i]!=0)
                {
                        b[i]=c;
                }
        }
}

void print(int *a,int *b,int n)
{
        int i;
        for(i=0;i<n;i++)
        {
                if(b[i]!=0)
                {
                        printf("Frequency of %d is %d\n",a[i],b[i]);
                }
        }
}