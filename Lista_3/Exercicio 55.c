#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, p, i = 4;
    srand(time(NULL));
    n = rand() % 10 + 1;
    
    while(i) {
        printf("Tentativa %d: ", 5 - i);
        scanf("%d", &p);
        if(p == n) { printf("Acertou!\n"); break; }
        i--;
    }
    if(!i) printf("Era %d\n", n);
    return 0;
}