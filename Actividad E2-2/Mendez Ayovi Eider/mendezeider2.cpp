#include <stdio.h>

int main() {
    int fechanacimiento;
    int fechaactual;
    int edad;

    printf("Ingrese su fecha de nacimiento: ");
    scanf("%d", &fechanacimiento);

    printf("Ingrese la fecha actual: ");
    scanf("%d", &fechaactual);

    edad = fechaactual - fechanacimiento;
    printf("Usted tiene %d años de edad\n", edad);

    return 0;
}
