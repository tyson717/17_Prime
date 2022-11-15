#include <stdio.h>

int nextPrime(int prime) {
    for (prime++; 1; prime++) {
        for (int j = 2; j < prime; ++j) {
            if (prime % j == 0) {
                // prime
                goto skip;
            }
        }

        break;

        skip:;
    }
    return prime;
}

int main() {
    int number;

    scanf("%u", &number);


    int prime = 2;
    do {
        printf("%d\n", prime);

        // find the next prime
        prime = nextPrime(prime);
    } while (prime <= number);
    return 0;
}
