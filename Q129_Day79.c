/* A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both. */

#include <stdio.h>

int main() {
    FILE *file_ptr;
    int num;
    int sum = 0;
    int count = 0;
    float average = 0.0;
    char filename[] = "numbers.txt";

    file_ptr = fopen(filename, "r");

    if (file_ptr == NULL) {
        printf("Error: Could not open file '%s'.\n", filename);
        return 1;
    }

    while (fscanf(file_ptr, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    if (count > 0) {
        average = (float)sum / count;
    }

    printf("\nFile: %s\n", filename);
    printf("Total Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    fclose(file_ptr);

    return 0;
}