/*C Write a C program to copy all elements from an array to another array. - char / int - any one */

#include<stdio.h>
void copy(int *src,int *des,int n);

int main()
{
        int src[50],des[50];
        int n,i;
        printf("Enter the size of array:");
        scanf("%d",&n);
        printf("Enter the elements of the array:\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",(src+i));
        }

        copy(src,des,n);

        printf("The copied elements of arry are:\n");
        for(i=0;i<n;i++)
        {
                printf("%d ",*(src+i));
        }
        printf("\n");
        return 0;
}

void copy(int *src,int *des,int n)
{
        int i;
        for(i=0;i<n;i++)
        {
                *(des+i) = *(src+i);
        }

}