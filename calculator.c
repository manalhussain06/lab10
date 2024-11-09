#include <stdio.h>
int main() 
{   char operator;
    float a, b, result;
    printf("Enter an operator {+, -, *, /}: ");
    scanf(" %c", &operator); 
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if  (operator=='+') 
	 {result = a+b;
     printf("result: %f\n", result);}
    else if (operator=='-') 
	 {result = a-b;
      printf("result: %f\n", result);}
    else if (operator=='*')
	 {result = a*b;
      printf("\nResult: %f", result);}
    else if (operator=='/') 
	{ if (b!= 0) 
	 {result = a/b;
      printf("\nResult:%f", result);} 
	else 
	 {printf("\nError");}
    }
    else 
	{ printf("\nError");}
 return 0;
}
