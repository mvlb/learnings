#include <stdio.h>
#include <stdlib.h>

void selectionSort(int a[], int n);
void swap(int *, int *);
#define ARRAY_SIZE	6

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void selectionSort(int array[], int n) {
	int i = 0, j = 0;
	for (i = 0; i < n; i++) {
		for (j = i+1;j < n; j++) {
			if (array[i] > array[j]) {
				swap(&array[i], &array[j]);
			}
		}
	}
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
	selectionSort(array, ARRAY_SIZE);

	printf("Sorted Array\n");
	for(i = 0;i < ARRAY_SIZE; i++) {
		printf("%d\t", array[i]);
	}
	printf("\n");
}
