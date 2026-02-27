#include <stdio.h>

int containsDuplicate(int numbers[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (numbers[i] == numbers[j]) {
                return 1;   // true
            }
        }
    }
    return 0;   // false
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int numbers[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    if (containsDuplicate(numbers, n))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
