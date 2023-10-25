#include <stdio.h>

int findSingle(int arr[], int n) {
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result ^= arr[i];
    }
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int single = findSingle(arr, n);
    printf("%d
", single);
    return 0;
}
