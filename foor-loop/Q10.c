#include <stdio.h>

int main() {
    int N, i;
    
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    printf("Multiplication table of %d:\n", N);
    
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N*i);
    }
    
    return 0;
}
