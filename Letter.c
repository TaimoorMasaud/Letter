#include<stdio.h>
int main()
{
    char ch;
    printf("\nEnter a letter : ");
    scanf("%c",&ch);
    int x=(ch>='A')&&(ch<='z');
    printf("\nYour letter is: %d",x);
}
