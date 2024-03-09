#include <stdio.h>

unsigned long long fibonacci(int n) {
    unsigned long long fib[n+1];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[n];
}

int main() {
    printf("%llu\n", fibonacci(5));
    return 0;
}