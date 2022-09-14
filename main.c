#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    float n = 0.0;
    double b = 0.0;

    for (int i = 0; i < 100; i++) {
        n += 0.1;
        b += 0.1;
    }
    printf("%f\n", n);
    printf("%f\n", b);
    return 0;
}
