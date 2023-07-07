#include <stdio.h>
#include <math.h>

void calculate_stats(int a, int b, int c, int d, int e, int *sum, double *average, double *std_deviation) {
    int numbers[] = {a, b, c, d, e};
    *sum = 0;
    double variance = 0.0;

    // Calculate sum
    for (int i = 0; i < 5; i++) {
        *sum += numbers[i];
    }

    // Calculate average
    *average = (double)*sum / 5;

    // Calculate variance
    for (int i = 0; i < 5; i++) {
        variance += pow(numbers[i] - *average, 2);
    }
    variance /= 5;

    // Calculate standard deviation
    *std_deviation = sqrt(variance);
}

int main() {
    // Example input
    int num1 = 5;
    int num2 = 10;
    int num3 = 15;
    int num4 = 20;
    int num5 = 25;

    int sum;
    double average, std_deviation;

    // Call the function and pass the addresses of the result variables
    calculate_stats(num1, num2, num3, num4, num5, &sum, &average, &std_deviation);

    // Print the results
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Standard Deviation: %.2f\n", std_deviation);

    return 0;
}
