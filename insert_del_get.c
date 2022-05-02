/*Write a C program to insert and delete  an element in an array at specified position - write fns  insert(n) , delete(n), get(n)
  where  n is specfied position taken from user*/
#include<stdio.h>

int insert(int a[],int n);
int delete(int a[],int n);
int get(int a[],int n);


int main()
{
        int a[50],n,i,option;
        printf("1.Insert\n2.Delete\n3.Getdata\n");
        scanf("%d",&option);
        switch(option)
        {
                case 1:
                        printf("Enter the size of array: ");
                        scanf("%d",&n);
                        printf("Enter the elements of the arry: ");
                        for(i=0;i<n;i++)
                        {
                                scanf("%d",&a[i]);
                        }
                        insert(a,n);
                        break;
                case 2:
                        printf("Enter the size of array: ");
                        scanf("%d",&n);
                        printf("Enter the elements of the arry: ");
                        for(i=0;i<n;i++)
                        {
                                scanf("%d",&a[i]);
                        }
                        delete(a,n);
                        break;
                case 3:
                        printf("Enter the size of array: ");
                        scanf("%d",&n);
                        printf("Enter the elements of the arry: ");
                        for(i=0;i<n;i++)
                        {
                                scanf("%d",&a[i]);
                        }
                        get(a,n);
                        break;
        }
        return 0;
}

int insert(int a[],int n)
{
        int num,pos,i;
        printf("Enter the data you want to insert: ");
        scanf("%d",&num);
        printf("Enter position: ");
        scanf("%d",&pos);

        if(pos <=0 || pos >n+1)
        {
                printf("Invalid position\n");
        }
        else
        {

                for(i=n-1;i>=pos-1;i--)
                {
                        a[i+1]=a[i];
                }
                a[pos-1]=num;
                n++;
                printf("After Inserting: ");
                for(i=0;i<n;i++)
                {
                        printf("%d ",a[i]);
                }
                printf("\n");
        }
        return 0;
}
