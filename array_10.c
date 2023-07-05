#include <stdio.h>
#include <math.h>

#define MAX_SIZE 100

double calculateMean(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double)sum / size;
}

double calculateVariance(int arr[], int size, double mean) {
    double variance = 0;
    for (int i = 0; i < size; i++) {
        variance += pow(arr[i] - mean, 2);
    }
    return variance / size;
}

double calculateStandardDeviation(double variance) {
    return sqrt(variance);
}

int main() {
    int arr[MAX_SIZE];
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    double mean = calculateMean(arr, size);
    double variance = calculateVariance(arr, size, mean);
    double standardDeviation = calculateStandardDeviation(variance);

    printf("\nSum: %d\n", (int)mean * size);
    printf("Mean: %lf\n", mean);
    printf("Variance: %lf\n", variance);
    printf("Standard Deviation: %lf\n", standardDeviation);

    return 0;
}
