//Check a number is negative or positive
#include<stdio.h>
#include<conio.h>
int main()
{
    int digit;

    printf("Enter the digit: ");
    scanf("%d",&digit);

    if(digit!=0)
    {
        if(digit>0)
        {
            printf("%d is a positive number",digit);
        }
        else
        {
            printf("%d is a negative number",digit);
        }

    }
}
