#include <stdio.h>

void ReadArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Masukkan nilai A[%d] : ", i+1);
        scanf("%d", &arr[i]);
    }
}
        
void PrintArr(int arr[], int size){
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n = 5;
    int A[n], B[n], C[n];
    int D[3][n];
    float RATA;
    int data;

    printf("\nDATA A\n");
    ReadArr(A, n);

    printf("\nDATA B\n");
    ReadArr(B, n);

    printf("\nDATA C\n");
    ReadArr(C, n);

    for (int row = 0; row < 3; row++){
        for (int col = 0; col < 5; col++){
            switch (row) {
                case 0:
                    data = A[col];
                    break;
                case 1:
                    data = B[col];
                    break;
                case 2:
                    data = C[col];
                    break;
            }
            D[row][col] = data;
            RATA += data;
        }
    }

    printf("\nData A : ");
    PrintArr(A, n);

    printf("\nData B : ");
    PrintArr(B, n);

    printf("\nData C : ");
    PrintArr(C, n);

    printf("\nMATRIKS D\n");
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < n; col++) {
            printf("%2.d ", D[row][col]);
        }
        printf("\n");
    }

    RATA = RATA / (n * 3);
    printf("\nRata-rata: %g", RATA);
    return 0;
}