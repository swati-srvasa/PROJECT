#include<stdio.h>
int main()
{
    printf("------: Basic Calculator:------");
    int num1,num2;
    double result;
    char op;
    printf("\nEnter Operator: + , - , * , / :");
    scanf("%c",&op);
    printf("Enter two values:");
    scanf("%d %d",&num1,&num2);
    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf(" %d + %d = %d",num1,num2,result);
        break;

    case '-':
        result = num1 - num2;
        printf(" %d - %d = %d",num1,num2,result);
        break;
        break;
    
    case '*':
       result = num1 * num2;
        printf(" %d * %d = %d",num1,num2,result);
        break;
    
    case '/':
        if (num2 != 0){
            result = num1 / num2;
            printf(" %d / %d = %d",num1,num2,result);
        }
        else {
            printf("Error! Division by zero.\n");
        }
        break;
    
    default:
    printf("Error ! Incorrect Operator");
        break;
    }
    return 0;
}