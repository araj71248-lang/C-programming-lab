#include <stdio.h>

int main() {
    float stress, yield_strength, fos;

    printf("Enter applied stress (MPa): ");
    scanf("%f", &stress);

    printf("Enter yield strength (MPa): ");
    scanf("%f", &yield_strength);

    fos = yield_strength / stress;

    printf("Factor of Safety = %.2f\n", fos);

    if (fos >= 2.0)
        printf("Safe design");
    else if (fos >= 1.5 && fos < 2.0)
        printf("Acceptable with monitoring");
    else
        printf("Danger - redesign needed");

    return 0;
}