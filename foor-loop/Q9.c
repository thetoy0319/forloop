#include <stdio.h>

int main() {
    int N, i;
    long long factorial = 1;
    
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    for (i = 1; i <= N; i++) {
        factorial *= i;
    }
    
    printf("The factorial of %d is: %lld\n", N, factorial);
    
    return 0;
}
