#include <stdio.h>

int main() {
    int N, i;
    
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    for (i = N; i >= 1; i--) {
        printf("%d\n", i);
    }
    
    return 0;
}
