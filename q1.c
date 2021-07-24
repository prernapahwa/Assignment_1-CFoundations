/**
 * Program to swap two numbers without using third variable.
 *
 * @Prerna(1910990964)
 * 23/7/2021
 * Assignment_1-CFoundations->q1
 *
**/
#include<stdio.h>
int main() {
    int a;
    int b;
    printf("a = ");
    scanf("%d",&a);

    printf("b = ");
    scanf("%d",&b);
    
    //logic
    a=a+b;
    b=a-b;
    a=a-b; 
	
    printf("a= %d\tb= %d",a,b);
    return 0;
}

