//This is the line causing issue in the master branch
//This is the second line causing issue in the master/ branch
#include <stdio.h>

int main()
{
    char o;
    float num1,num2;
    printf("Enter operator either + or - or * or / : ");
    scanf("%c",&o);
    printf("Enter two operands: ");
    scanf("%f%f",&num1,&num2);
    switch(o) {
        case '+':
            printf("%.1f + %.1f = %.1f",num1, num2, num1+num2);
            break;
        case '-':
            printf("%.1f - %.1f = %.1f",num1, num2, num1-num2);
            break;
        case '*':
            printf("%.1f * %.1f = %.1f",num1, num2, num1*num2);
            break;
        case '/':
            printf("%.1f / %.1f = %.1f",num1, num2, num1/num2);
            break;
        default:
            /* If operator is other than +, -, * or /, error message will be shown */
            printf("Error! operator is not correct");
            break;
    }
    return 0;
}
