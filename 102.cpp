
#include <stdio.h>

int main() {
    int arr[100], n, position, element;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position (1 to %d): ", n + 1);
    scanf("%d", &position);

    if (position < 1 || position > n + 1) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the right
        for (int i = n; i >= position; i--) {
            arr[i] = arr[i - 1];
        }

        arr[position - 1] = element;
        n++;

        printf("Array after insertion:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}