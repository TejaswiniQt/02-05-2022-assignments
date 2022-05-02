/*WAP to create a binary search tree using recursion*/


#include<stdio.h>
#include<stdlib.h>

struct tnode
{
        int data;
        struct tnode *right;
        struct tnode *left;
};

struct tnode *CreateBST(struct tnode *, int);
void Inorder(struct tnode *);

int main()
{
        struct tnode *root = NULL;
        int choice, item, n, i;
        do
        {
                printf("Enter Choice\n1.Creation\n2.print\n3.Exit\n");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                root = NULL;
                                printf("\n Enter number of nodes to create: ");
                                scanf("%d",&n);
                                for(i = 1; i <= n; i++)
                                {
                                        printf("Enter data:");
                                        scanf("%d",&item);
                                        root = CreateBST(root,item);
                                }
                                printf("\nBST with %d nodes is ready to Use!!\n", n);
                                break;
                        case 2:
                                printf("\nBST Traversal in INORDER \n");
                                Inorder(root);
                                printf("\n");
                                break;
                        case 3:
                                exit(0);
                                break;
                }
        } while(choice != 3);
        return 0;
}

struct tnode *CreateBST(struct tnode *root, int item)
{
        if(root == NULL)
        {
                root = (struct tnode *)malloc(sizeof(struct tnode));
                root->left = root->right = NULL;
                root->data = item;
                return root;
        }
        else
        {
                if(item < root->data )
                        root->left = CreateBST(root->left,item);
                else if(item > root->data )
                        root->right = CreateBST(root->right,item);
                else
                        printf(" Duplicate Element !! Not Allowed !!!");
                return(root);
        }
}


void Inorder(struct tnode *root)
{
        if( root != NULL)
        {
                Inorder(root->left);
                printf(" %d ",root->data);
                Inorder(root->right);
        }
}