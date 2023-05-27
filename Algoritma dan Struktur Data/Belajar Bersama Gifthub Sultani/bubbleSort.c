#include <stdio.h>

void swap(int*, int*);
void bubbleSort(int*, int);

int main() {
    int arr[] = {11,21,34,40,15,13,7,9,10,8};
    bubbleSort(arr, sizeof(arr)/sizeof(arr[0]));
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int* arr, int size){
    int i, j, temp;
    for(i = 0; i < size; i++){
        for(j = 0; j < size - i; j++){
            if(arr[j] > arr[j + 1]) swap(&arr[j], &arr[j + 1]);
        }
    }
} 