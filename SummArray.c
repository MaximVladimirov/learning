/*

***********Summ array recursive*************

*/
#include <stdio.h>
#include <stdlib.h>

int sumarray(int *arr,int size);

int main(){

	int array[] = {1,2,3,4,5,6,7,8,9,10};

	int size = sizeof(array)/sizeof(int);

	int summ = sumarray(array,size);

	printf("%d\n", size);
	printf("%d\n", summ);

	return 0;

}

int sumarray(int *arr,int size){

	int array[size - 1];

	for(int i = 0; i < size - 1; i++)
		array[i] = arr[i + 1];

	if (size == 1) {
		return arr[0];
	}

	size = size - 1;

	return arr[0] + sumarray(array,size);

}
