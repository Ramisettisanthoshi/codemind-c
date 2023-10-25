#include <stdio.h>
#include <stdlib.h>

int findHCF(int* numbers, int n) {
    int hcf = numbers[0];
    for (int i = 1; i < n; i++) {
        int currentNumber = numbers[i];
        while (currentNumber != 0) {
            int temp = hcf % currentNumber;
            hcf = currentNumber;
            currentNumber = temp;
        }
    }
    return hcf;
}
int main() {
    int n;
    scanf("%d", &n);

    int* numbers = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int hcf = findHCF(numbers, n);
    printf("%d
", hcf);

    free(numbers);
    return 0;
}