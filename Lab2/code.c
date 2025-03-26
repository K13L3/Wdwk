#include <stdio.h>

int arr[100] = {
    25, 76, 34, 2, 85, 17, 59, 91, 10, 68, 44, 61, 19, 57, 72, 60, 8, 63, 46, 92,
    55, 88, 93, 11, 13, 36, 79, 74, 22, 45, 3, 24, 5, 42, 1, 66, 26, 50, 16, 90,
    38, 27, 64, 32, 54, 23, 40, 70, 39, 9, 18, 56, 28, 41, 15, 49, 47, 67, 29, 12,
    71, 69, 33, 30, 82, 62, 35, 37, 73, 4, 51, 65, 48, 77, 78, 52, 29, 53, 80, 31,
    81, 14, 58, 20, 43, 83, 84, 65, 75, 48, 87, 94, 95, 96, 98, 99, 100, 7, 85, 5
};

int arrSorted[100] = {
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
    20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39,
    40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59,
    60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79,
    80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99
};

int arrRevesed[100] = {
    100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81,
    80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61,
    60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41,
    40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21,
    20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1
};

void printArr(int *arr, int low, int high){
	printf("Tab: ");
	for (int i = low; i<=high; i++){
		printf("%d, ", arr[i]);
	}
	printf("\n");
}

// Funkcja QuickSort
void quickSort(int *arr, int left, int right) {
    if (left >= right) return; // Warunek zakończenia rekurencji
    int mid = (right+left)/2;
    int pivot = arr[mid]; // Wybieramy ostatni element jako pivot
    int i = left - 1;       // Indeks dla elementów mniejszych niż pivot

    for (int j = left; j < right; j++) {
        if (arr[j] < pivot) {
            i++;
            // Zamiana elementów
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Umieszczamy pivot na właściwej pozycji
    int temp = arr[i + 1];
    arr[i + 1] = arr[right];
    arr[right] = temp;

    // Rekurencyjne wywołanie dla lewej i prawej części tablicy
    quickSort(arr, left, i);
    quickSort(arr, i + 2, right);
}