#include <stdio.h>
int main() {
    double a, b;
    double largest, smallest;
    printf("Enter two values: ");
    scanf("%lf %lf", &a, &b);
    if (a > b) {
        largest = a;
        smallest = b;
    } else {
        largest = b;
        smallest = a;
    }
    printf("Largest: %.2lf\nSmallest: %.2lf\n", largest, smallest);
    return 0;
}
