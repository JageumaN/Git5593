#include <stdio.h>
int main() {
    for(int i=1; i<=100; i+=2) printf("%d ", i);
    printf("\n");
    for(int i=2; i<=100; i+=2) printf("%d ", i);
    printf("\n");
    
    // 소수(Prime) 출력
    for(int i=2; i<=100; i++) {
        int is_prime = 1;
        for(int j=2; j*j<=i; j++) {
            if(i%j == 0) { is_prime = 0; break; }
        }
        if(is_prime) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
