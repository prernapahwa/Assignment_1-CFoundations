/*
 * program to reverse the given 1D array
 *
 * @Prerna(1910990964)
 * 24/7/2021
 * Assignment_1-CFoundations->q4
 *
*/

#include<stdio.h>

void reverse (int arr[]) {

    int start = 0 ;//pointer at the starting of array

    int end = 5 ; // pointer at the end of array 

    while(start < end) {
    	int temp;
	temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;

	start++;
	end--;
    }

}


int main() {
    int array[] = {1,2,3,4,5,6};
    
    reverse(array); // function to reverse the array
	
    printf("Reversed array is : ");

    for(int i = 0 ; i < 6 ; i++) {
    	printf("%d ",array[i]);
    }
    return 0;
}
