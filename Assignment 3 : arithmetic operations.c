#include <stdio.h>
int main()
{
char op;
int a,b, result;

printf("enter operator (+,-,*,/, ):");
scanf("%c", &op);
printf(" enter two numbers: ");
scanf("%d %d", &a, &b);

switch(op)
{
case '+' : result = a + b; printf("result = %d",result); break;
case '-' : result = a - b; printf("result = %d",result); break;
case '*' : result = a*b; printf(" result = %d", result); break;
case '/' :
          if (b != 0)
          {
           result = a/b; printf("result = %.d" , result);
          }
          else 
          {
          printf("cannot divide by zero");
          }
          break;
case 'm' : result = a%b; printf(" result = %d", result); break;

default : printf(" invalid operator");
}
return 0;
}
