/*WAP to check whether a given String is palindrome or not.*/

#include <stdio.h>
#include <string.h>

int isPalindrome(char *str, int leftIndex, int rightIndex);

int main()
{
        char str[100];
        printf("Enter a string for palindrome check\n");
        scanf("%[^\n]%*c",str);

        if(isPalindrome(str, 0, strlen(str) - 1)){
                printf("%s is a Palindrome \n", str);
        } else {
                printf("%s is not a Palindrome \n", str);
        }
        return 0;
}

int isPalindrome(char *str, int leftIndex, int rightIndex)
{
        if(NULL == str || leftIndex < 0 || rightIndex < 0)
        {
                printf("Invalid Input");
                return 0;
        }

        if(leftIndex >= rightIndex)
                return 1;
        if(str[leftIndex] == str[rightIndex]){
                return isPalindrome(str, leftIndex + 1, rightIndex - 1);
        }
        return 0;
}