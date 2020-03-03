#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Reto gaticos \n");
    //Imprimo lso datos
    printf("Escribe 1 para el cmanino dulce \n");
    printf("Escribe 2 para el cmanino madera \n");
    printf("Escribe 3 para el cmanino del gato con botas \n\n");

    // declaro las varianles
    int numero;

    //Recibo los datos por teclado y los guarod en la varibale numero
    scanf("%i",& numero);

    // Inicio de ;a estructura switch

    switch(numero)
    {
        case 1:
        printf("\n Te vas a engordar si comes mucho ducle \n");
        break;

        case 2:
        printf("\n Estas listo para iniciar un nuevo proyecto \n");

        case 3:
        printf("\n Que buena pelicula para distraerte y divertirse un rato \n");
        break;

        default:
        printf("\n Selecciones una opcion conrrecta \n");
        break;
        return 0;

    }

}
