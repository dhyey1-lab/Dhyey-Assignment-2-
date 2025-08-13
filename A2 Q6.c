#include <stdio.h>
int main() {
    double s1, s2, s3, total, average;
    printf("Enter marks of three subjects: ");
    scanf("%lf %lf %lf", &s1, &s2, &s3);

    if (s1 < 35 || s2 < 35 || s3 < 35) {
        printf("Fail\n");
        return 0;
    }

    total = s1 + s2 + s3;
    average = total / 3;

    printf("Total: %.2lf\nAverage: %.2lf\n", total, average);

    if (average >= 70)
        printf("Grade: Distinction\n");
    else if (average >= 60)
        printf("Grade: First\n");
    else if (average >= 50)
        printf("Grade: Second\n");
    else if (average >= 35)
        printf("Grade: Third Class\n");
    else
        printf("Fail\n");

    return 0;
}
