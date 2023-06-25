#include <stdio.h>  
int main()  
{  
    // declare local variables  
    char choose;  
    int a,b;   
    float result;  
    
    printf (" Choose an operator(+, -, *, /) to perform the operation in C Calculator \n ");    
    scanf ("%c", &choose); // take an operator  
    if (choose == '/' )  
    {  
        printf (" You have selected: Division");  
    }  
    else if (choose == '*')  
    {  
        printf (" You have selected: Multiplication");  
     }  
       
    else if (choose == '-')  
    {  
        printf (" You have selected: Subtraction");  
     }  
        else if (choose == '+')  
    {  
        printf (" You have selected: Addition");  
     }     
    printf (" \n Enter the first number: ");  
    scanf(" %d", &a); // take fist number  
    printf (" Enter the second number: ");  
    scanf (" %d", &b); // take second number  
      
    switch(choose)  
    {  
        case '+':  
            result = a + b; // add two numbers  
            printf (" Addition of %d and %d is: %.2f", a, b, result);  
            break;  
          
        case '-':  
            result = a - b; // subtract two numbers  
            printf (" Subtraction of %d and %d is: %.2f", a, b, result);  
            break;  
              
        case '*':  
            result = a * b; // multiply two numbers  
            printf (" Multiplication of %d and %d is: %.2f", a, b, result);  
            break;            
          
        case '/':  
            if (b == 0)   // if b == 0, take another number  
            {  
                printf (" \n Divisor cannot be zero. Please enter another value ");  
                scanf ("%d", &b);        
                }  
            result = a / b; // divide two numbers  
            printf (" Division of %d and %d is: %.2f", a, b, result);  
            break;  
        default:  /* use default to print default message if any condition is not satisfied */  
            printf (" Something is wrong!! Please check your option again ");               
    }  
    return 0;  
}  
