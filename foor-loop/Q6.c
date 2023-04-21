#include <stdio.h>

int main() {
    int N, i;
    
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    for (i = N; i >= 2; i -= 2) {
        printf("%d\n", i);
    }
    
    return 0;
}
