#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter Numbers a :");
    scanf("%f", &a);
    printf("Enter Numbers b :");
    scanf("%f", &b);
    int c;
    printf("Enter operator that you have to run:\n");
    printf("Enter 1 for addition of a and b\n");
    printf("Enter 2 for subtraction of a and b\n");
    printf("Enter 3 for multiplication of a and b\n");
    printf("Enter 4 for division of a and b\n");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("a+b=%f", a + b);
        break;

    case 2:
        printf("a-b=%f", a - b);
        break;

    case 3:
        printf("a*b=%f", a * b);
        break;

    case 4:
        printf("a/b=%f", a / b);
        break;
    default:
        printf("you entered something wrong");
    }
    return 0;
}