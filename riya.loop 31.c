#include <stdio.h>

int main() {
    int i, j, sum = 0, isPrime;

    for(i = 2; i <= 500; i++) {
        isPrime = 1;
        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1)
            sum += i;
    }

    printf("Sum of prime numbers between 1 and 500 = %d\n", sum);
    return 0;
}
