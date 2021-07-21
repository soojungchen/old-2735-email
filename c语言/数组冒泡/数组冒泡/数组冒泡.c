#include <stdio.h>
void bubbleSort(int arr[], int size){
	for (int bound = 0; bound < size; bound++){
		for (int cur = size - 1; cur>bound; cur--){
			if (arr[cur - 1] > arr[cur]){
				int temp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = temp;
			}
		}
	}
}

int main()
{
	int arr[]= { 9,5,2,7,18,19};
	int size = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, size);
	for (int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}