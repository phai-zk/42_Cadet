#include <strings.h>  // Required for bzero
#include <stdio.h>
#include "libft.h"

struct Example {
    int a;
    double b;
    char c[20];
};

int main() {
    struct Example example;

    // Zero out the entire structure using bzero
    ft_bzero(&example, sizeof(example));

    // Now all fields in 'example' are set to zero.
    printf("a: %d, b: %f, c: %s\n", example.a, example.b, example.c); // Should print a: 0, b: 0.000000, c: (empty string)

    return 0;
}
