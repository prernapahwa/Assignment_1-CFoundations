/*
 * count the number of vowels and consonant in string
 *
 * @Prerna(1910990964)
 * 24/7/2021
 * Assignment_1-CFoundation->q3
 *
**/

#include<stdio.h>


int main() {
    char  str[1000];
    fgets(str, sizeof(str), stdin);

    int vowels = 0;
    int consonants = 0;
    for(int i = 0 ; str[i] != '\0' ; i++) {
    	
	    if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' ||str[i] == 'i' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] =='U') {
		vowels++;	
	    }
	    else if((str[i] >= 65 && str[i] <=90) || (str[i] >= 97 && str[i] <= 122)){
	    	consonants++;
	    }
    }
    printf("Vowels= %d, Consonants=%d",vowels,consonants);
    
    return 0;
}
