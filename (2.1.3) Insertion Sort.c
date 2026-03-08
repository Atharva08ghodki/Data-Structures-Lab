#include <stdio.h>

int main() {
    int a[20], n, i, key, j;

    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    printf("%d\n", n);

    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        printf("%d\n", a[i]);
    }

    for(i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;

        while(j >= 0 && key < a[j]) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }

    printf("Sorted array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}