#include <stdio.h>

int binary_search(int arr[], int size, int element) {
    int low = 0, high = size - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == element)
            return mid;
        else if (arr[mid] < element)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; // Element not found
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element, index;

    printf("Enter element to search: ");
    scanf("%d", &element);

    index = binary_search(arr, size, element);

    if (index != -1)
        printf("Element found at index %d.\n", index);
    else
        printf("Element not found.\n");

    return 0;
}
