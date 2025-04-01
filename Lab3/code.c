#include <stdio.h>

#define N = 100

int array1[100][100];
int array2[100][100];


void transposeMatrix (int *arr, N);
void matrixMul(int *arr1, int *arr2, int *arrRes,N);

//matrixMulOptXXX zoptymalizowana funkcje matrixMul, gdzie pierwszy bit od prawej to 1 optymalicaja (transpozycja macierzy), drugi bit oznacza optymalicację poprzez rozwiniecie pętli, a trzeci to optymalizacja przez bloki pamieci? 1 - z optymalizacja, 0 - bez optymalizacji;
void matrixMulOpt001(int *arr1, int *arr2, int *arrRes,N);
void matrixMulOpt010(int *arr1, int *arr2, int *arrRes,N);
void matrixMulOpt100(int *arr1, int *arr2, int *arrRes,N);
void matrixMulOpt011(int *arr1, int *arr2, int *arrRes,N);
void matrixMulOpt101(int *arr1, int *arr2, int *arrRes,N);
void matrixMulOpt110(int *arr1, int *arr2, int *arrRes,N);
void matrixMulOpt111(int *arr1, int *arr2, int *arrRes, N));

void transposeMatrix (int *arr, N){
	for (int i = 0; i < N; i++){
		for (int j = i + 1; j < n; j++){
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
}

void matrixMul(int *arr1, int *arr2, int *arrRes N){
	for (int i = 0; i < N; i++){
		for (int j = 0; j< N; j++){
			for (int k = 0; k< N; k++){
				arrRes[i][j] += arr1[i][k] * arr2[k][j];
			}		
		}
	}
}

