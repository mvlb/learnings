#include "common.h"
#include "differenceSequence.h"

#define ARRAY_SIZE	5

int* differenceSequence(int array[], int n, int count) {

    int *resultArray = (int*) malloc (sizeof(int) * n);

    if (n == 0 && count == 0) {
        /* Only 1 element in array */
        resultArray[n] = -1 * array[n];
        return resultArray;
    }
    differenceSequenceRecurse(array, n, resultArray);

    return resultArray;

}

void differenceSequenceRecurse(int array[], int n, int resultArray[]) {

    if(n == 0) {
        /* second base case where size will be 0, and array recursion should end */
        return;
    }
    resultArray[n-1] = array[n] - array[n-1];
    differenceSequenceRecurse(array, n-1, resultArray);
}

int* derivativeSequence(int array[], int order, int arraySize) {

	if (order == 0) {
		return array;
	}
	
	return derivativeSequence(differenceSequence(array, arraySize-1, 0), order-1, arraySize-1);
}

int main() {

    int *array = (int*) malloc (sizeof(int) * ARRAY_SIZE);
    int i = 0;
    int *resultArray;

    array = (int[ARRAY_SIZE]){5, 6, 3, 9, -1};
//  array = (int[ARRAY_SIZE]){1};

    resultArray = derivativeSequence(array, 4, ARRAY_SIZE);

    /* Print Arrays */
    printf("Original Array \n");
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("%d \t", array[i]);
    }
    printf("\n");

    printf("Derivative Array \n");
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("%d \t", resultArray[i]);
    }
    printf("\n");


    return 0;


}

