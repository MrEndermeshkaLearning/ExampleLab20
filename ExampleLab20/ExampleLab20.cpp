#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 10

int getRecusevlySumOfLineArray(int arr[], int size, int currentPosition=-100, int sum=0);//прототип
void getRandArray(int arr[], int size);
void print(int arr[], int size);

//управляющая функция
int main()
{
	int arr[N];
	getRandArray(arr, N);
	print(arr, N);
	int sum = getRecusevlySumOfLineArray(arr, N);
	printf("Sum=%d", sum);
}

//рекурсивная функция, функция вызывающая сама себя
int getRecusevlySumOfLineArray(int arr[],int size, int currentPosition, int sum) {//sum=0 необязательный параметр при вызове
	if (currentPosition == -100) {
		currentPosition = size - 1;
	}
	if (currentPosition == -1) {
		return sum;
	}
	else {
		sum += arr[currentPosition];
		currentPosition--;
		return getRecusevlySumOfLineArray(arr, size, currentPosition, sum);
	}
}
//рандом
void getRandArray(int arr[], int size) {
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % (i - 10000) + i;
	}
}
//вивод
void print(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("arr[%d]=%d\n", i, arr[i]);
	}
}
