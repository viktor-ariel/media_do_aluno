#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
    float nota1, nota2;

    system("cls");

    printf("Qual sua nota 1? ");
    scanf("%f", &nota1);
    system("cls");

    printf("Qual sua nota 2? ");
    scanf("%f", &nota2);
    system("cls");

    float media = (nota1 + nota2) / 2;
    printf ("Sua media e: %.2f \n \n", media);

    system("pause");
}
