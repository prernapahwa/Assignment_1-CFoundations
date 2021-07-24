/**
 * Program to print a pyramid having a given number of steps
 *
 * @Prerna(1910990964)
 * 23/7/2021
 * Assignment_1-CFoundations->q2
 *
**/
#include<stdio.h>
int main() {
    int n;
    printf("%d",&n);

    for(int i = 1 ; i <= n ; i++) {
    	//printing spaces 
	for(int j = i ; j < n ; j++ ) {
	    printf(" ");
	}

	//printing #
	for(int j = 1 ; j <= i ; j++ ){
	    printf("# ");
	}

	printf("\n");
    }    
}
