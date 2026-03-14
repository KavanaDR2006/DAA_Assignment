#include <stdio.h>
#include <windows.h>
int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            return i;
    }
    return -1;
}
int main() {
    int n, key;
    int arr[100000];
    LARGE_INTEGER start, end, freq;
    QueryPerformanceFrequency(&freq);
    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    QueryPerformanceCounter(&start);
    int pos = linearSearch(arr, n, key);
    QueryPerformanceCounter(&end);
    double time = (double)(end.QuadPart - start.QuadPart) / freq.QuadPart;
    if(pos != -1)
        printf("Element found at position %d\n", pos + 1);
    else
        printf("Element not found\n");
    printf("Running Time = %lf seconds\n", time);
    return 0;
}
