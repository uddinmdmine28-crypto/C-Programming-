#include<stdio.h>
int main(){
    int n1,n2;
    char c;
    
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);

    printf("Enter operator (+,-,*,/): ");
    scanf(" %c",&c);

    switch (c)
    {
    case '+':
        printf("Result = %d\n",n1+n2);
        break;
    case '-':
        printf("Result = %d\n",n1-n2);
        break;
    case '*':
        printf("Result = %d\n",n1*n2);
        break;
    case '/':
        printf("Result = %d\n",n1/n2);
        break;
    
    default:
        printf("Wrong operator! \n");
        break;
    }

    return 0;
}