#include <stdio.h>
int main() {
    int n, i, flag = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    if(n <= 1) {
        printf("Not a prime number");
        return 0;
    }

    for(i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Prime Number");
    else
        printf("Not a Prime Number");

    return 0;
}
