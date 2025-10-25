#include <stdio.h>

int main() {
    float mass, velocity, KE;

    printf("Enter mass (in kg): ");
    scanf("%f", &mass);

    printf("Enter velocity (in m/s): ");
    scanf("%f", &velocity);

    KE = 0.5 * mass * velocity * velocity;

    printf("Kinetic Energy = %.2f Joules", KE);
    return 0;
}
