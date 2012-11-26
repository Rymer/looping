/*
 ============================================================================
 Name        : looping_test.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int numbers = 0;

int main(void) {
	printf("Write a number");
	scanf("%i", &numbers);
	printf("%i\n",numbers);
	return 0;
}

