#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>

#define MAX 10000000

int main() {
    bool *is_prime = (bool *) malloc(MAX * sizeof(bool));
    if (is_prime == NULL) {
        printf("Error: Memory allocation failed.\n");
        return 1;
    }

    clock_t start = clock();

    for (int i = 0; i < MAX; i++) {
        is_prime[i] = true;
    }

    is_prime[0] = false;
    is_prime[1] = false;

    for (int i = 2; i <= sqrt(MAX); i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                is_prime[j] = false;
            }
        }
    }

    int count = 0;
    for (int i = 2; i <= MAX; i++) {
        if (is_prime[i]) {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal prime numbers found: %d\n", count);

    free(is_prime);

    clock_t end = clock();
    printf("Time taken: %f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);

    return 0;
}
