#include<stdio.h>

int main(){
    int n1,n2;
    char c;
    
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);

    printf("Enter operator (+,-,*,/): ");
    scanf(" %c",&c);

    if(c == '+'){
        printf("Result = %d\n",n1+n2);
    }
    else if(c == '-'){
        printf("Result = %d\n",n1-n2);
    }
    else if(c == '*'){
        printf("Result = %d\n",n1*n2);
    }
    else if(c == '/'){
        printf("Result = %d\n",n1/n2);
    }
    else{
        printf("Wrong operator \n");
    }

    return 0;
}