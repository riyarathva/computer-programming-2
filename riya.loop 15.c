#include <stdio.h>
int main() {
    int n, original, rem, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    original = n;
    while (n != 0) {
        rem = n % 10;
        sum += rem * rem * rem;
        n /= 10;
    }

    if (sum == original)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}
