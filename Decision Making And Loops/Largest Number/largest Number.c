#include <stdio.h>
void main()
{
    int num1, num2, num3;
    printf("Enter Number1 = ");
    scanf("%d", &num1);

    printf("Enter Number2 = ");
    scanf("%d", &num2);

    printf("Enter Number3 = ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("%d is Largest Number\n", num1);
    }
    else if (num2 > num3)
    {
        printf("%d is Largest Number\n", num2);
    }
    else
    {
        printf("%d is Largest Number\n", num3);
    }
}