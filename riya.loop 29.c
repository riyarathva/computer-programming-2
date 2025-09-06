#include <stdio.h>

int main() {
    int n, binary[32], i = 0;
    printf("Enter decimal number: ");
    scanf("%d", &n);

    if(n == 0) {
        printf("Binary = 0");
        return 0;
    }

    while(n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    printf("Binary = ");
    for(int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    return 0;
}
