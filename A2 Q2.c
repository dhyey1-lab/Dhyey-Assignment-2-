#include <stdio.h>
int main() {
    double a, b, c;
    double largest, smallest;
    printf("Enter three values: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Find largest
    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }

    // Find smallest
    if (a <= b && a <= c) {
        smallest = a;
    } else if (b <= a && b <= c) {
        smallest = b;
    } else {
        smallest = c;
    }

    printf("Largest: %.2lf\nSmallest: %.2lf\n", largest, smallest);
    return 0;
}
