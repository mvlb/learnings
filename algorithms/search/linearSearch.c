#include <stdio.h>
#include <stdlib.h>

int linearSearch(int a[], int n);
#define ARRAY_SIZE	6

int linearSearch(int array[], int n) {	

	int i = 0;
	for (i = 0;i < ARRAY_SIZE; i++) {
		if(array[i] == n) return i;
	}
	return -1;
}

int main() {

	int *array = (int*) malloc (sizeof(int) * ARRAY_SIZE );
	int i = 0;
	//array = (int[ARRAY_SIZE]){5, 2, 4, 6, 1, 3};
	array = (int[ARRAY_SIZE]){31, 41, 59, 26, 41, 58};

	printf("Original Array\n");
	for(i = 0;i < ARRAY_SIZE; i++) {
		printf("%d\t", array[i]);
	}
	i = linearSearch(array, 26);

	printf("index is %d \n", i);
	return 0;
}
