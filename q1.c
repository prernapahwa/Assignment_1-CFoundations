/**
 * Program to swap two numbers without using third variable.
 *
 * @Prerna(1910990964)
 * 23/7/2021
 * Assignment_1=CFoundations->q1
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

    /*we have to compare a and b because we need to 
     subtract the numbers in order to calculate their difference*/ 

    if(a < b) {
        b = b - a;
	a = a + b;
	b = a - b;
    }

    else if(a > b) {
    	a = a - b;
	b = a + b;
	a = b - a;
    }
    printf("a = %d\tb = %d",a,b);
    return 0;
}

