#include<stdio.h>
void main(){
    char s;
    int num1,num2; 
    printf("Enter the operator:(+-*/): ");
    scanf("%c",&s);
    printf("Enter num1:");
    scanf("%d",&num1);
    printf("Enter num2:");
    scanf("%d",&num2);
    
    switch(s)
    {
        case '+':
            printf("%d + %d = %d",num1,num2,num1+num2);
            break;
        case '-':
            printf("%d - %d = %d",num1,num2,num1-num2);
            break;
        case '*':
            printf("%d * %d = %d",num1,num2,num1*num2);
            break;
        case '/':
            printf("%d / %d = %d",num1,num2,num1/num2);
            break;
    }
}