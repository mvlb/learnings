/* Program uses recursion to find the max number in a given array
 * of size 'N'. Array can hold negative numbers and size can be
 * 1 or 0. No Global variables allowed
 * This projected is licensed under the terms of the MIT license.
 * Copyright Balaji Ravidnran 2015
 */
#include <stdio.h>
#include <stdlib.h>

int arrayMax(int *a, int size);
int maxNumber(int a, int b);
#define ARRAY_SIZE 10

int maxNumber(int a, int b) {
	return (a > b) ? a : b;
}
int arrayMax(int *array, int n) {

	if (n == 1) return array[0];
	return (maxNumber(arrayMax(array,n-1),array[n-1]));
}
int main() {

	int *array = (int*)malloc(sizeof(int)*ARRAY_SIZE);
	//array = (int[ARRAY_SIZE]){-10,-20,-30,-40,-50,-60,-70,-80,-90,-100};
	array = (int[ARRAY_SIZE]){-10,-20,-30,-40,-50,-60,-70,80,-90,-100};

	printf("Max Number in the array is %d \n",arrayMax(array, ARRAY_SIZE));
	
	return 0;

}
