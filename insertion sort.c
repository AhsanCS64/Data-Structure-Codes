#include <stdio.h>

int main() {
    int arr[] = {3, 4, 2, 9, 1, 0}, i, n, key, j,p;
    n = sizeof(arr) / sizeof(arr[0]);

    printf("Initial array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        printf("Outer loop Step-%d\n", i);
p=1;
        while (j >= 0 && key < arr[j]) {

            printf("  Inner loop Step-%d\n", p);
            printf("  Array state: ");
            for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        p++;
            arr[j + 1] = arr[j];
            j--;
            printf("\n");

        }
        arr[j + 1] = key;
        printf("  Array state: ");
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n\n");

    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
