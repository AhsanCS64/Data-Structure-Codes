#include <stdio.h>

int a[6] = {2, 3, 1, 4, 6, 5};
int b[6];

void Merge(int low, int mid, int high) {
    int h = low, i = low, j = mid + 1;

    while (h <= mid && j <= high) {
        if (a[h] <= a[j]) {
            b[i] = a[h];
            h++;
        } else {
            b[i] = a[j];
            j++;
        }

        i++;
    }

    if (h > mid) {
        for (int k = j; k <= high; k++) {
            b[i] = a[k];
            i++;
        }
    } else {
        for (int k = h; k <= mid; k++) {
            b[i] = a[k];
            i++;
        }
    }

    for (int k = low; k <= high; k++) {
        a[k] = b[k];
    }
}

void MergeSort(int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;

        MergeSort(low, mid);
        MergeSort(mid + 1, high);
        Merge(low, mid, high);
    }
}

int main() {
    int n = 6;

    MergeSort(0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
