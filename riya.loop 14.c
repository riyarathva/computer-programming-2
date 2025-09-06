#include <stdio.h>
int main() {
    int n, original, rev = 0, rem;
    printf("Enter n: ");
    scanf("%d", &n);

    original = n;
    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    if (rev == original)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome");

    return 0;
}
