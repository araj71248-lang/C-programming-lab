int main() {
    float strength1, strength2;

    printf("Enter tensile strength of material 1 (MPa): ");
    scanf("%f", &strength1);

    printf("Enter tensile strength of material 2 : MPa");
    scanf("%f", &strength2);

    if (strength1 > strength2)
        printf("Material 1 has higher tensile strength: %.2f (MPa) ", strength1);
    else if (strength2 > strength1)
        printf("Material 2 has higher tensile strength: %.2f (MPa)", strength2);
    else
        printf("Both materials have equal tensile strength");

    return 0;
}
