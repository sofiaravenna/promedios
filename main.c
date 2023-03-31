#include <stdio.h>

int main() {
    float nota, total=0, promedio;
    int cantidad=0;

    printf("El programa calculara el promedio de las notas ingresadas.\nPara finalizar ingrese -1.\n.\n");

    do{
        printf("Ingresar las notas: ");
        scanf("%f",&nota);

        if(nota != -1){
            total=total+nota;
            cantidad=cantidad+1;
        }

    }
    while(nota != -1);
    promedio=total/(cantidad);
    printf("El promedio es: %f",promedio);

    return 0;
}
