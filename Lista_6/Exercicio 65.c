#include <stdio.h>

int main()
{
    int i;

    // Estrutura "para" (for)
    for (i = 100; i >= 0; i -= 10)
    {
        printf("%i ", i);
    }

    printf("Acabou!\n");

    return 0;
}