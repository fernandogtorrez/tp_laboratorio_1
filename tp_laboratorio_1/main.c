#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "funciones.h"

int main()
{
    int operando1;
    int operando2;
    int rdoSuma;
    int rdoResta;
    float rdoDividir;
    int rdoMultiplicar;
    int rdoFactoria1;
    int rdoFactoria2;
    int flagOperando1 = 0;
    int flagOperando2 = 0;
    int flagOperando3 = 0;
    char seguir = 'n';

    do
    {

        switch(menu(flagOperando1,flagOperando2,flagOperando3,operando1,operando2))
        {
            case 1:
                flagOperando1 = 1;
                printf("Ingrese el primer operando: ");
                scanf("%d",&operando1);
                break;
            case 2:
                if(flagOperando1 == 1)
                {
                    printf("Ingrese el segundo operando: ");
                    scanf("%d",&operando2);
                    flagOperando2 = 1;
                }
                else
                {
                    printf("Primero ingrese el primer operando.\n");
                }
                break;
            case 3:
                if(flagOperando1 == 1 && flagOperando2==1)
                {
                    rdoSuma = sumar(operando1,operando2);
                    rdoResta = restar(operando1,operando2);
                    rdoDividir = (float) dividir(operando1,operando2);
                    rdoMultiplicar = multiplicar(operando1,operando2);
                    rdoFactoria1 = factorial(operando1);
                    rdoFactoria2 = factorial(operando2);

                    printf("Calculos realizados con exito...\n");

                    flagOperando3 = 1;
                }
                else
                {
                    printf("Todavia no ingresaste los dos operandos\n");
                }

                break;
            case 4:
                if(flagOperando1==1 && flagOperando2==1 && flagOperando3==1)
                {
                    printf("El resultado de %d + %d es: %d\n",operando1,operando2,rdoSuma);
                    printf("El resultado de %d - %d es: %d\n",operando1,operando2,rdoResta);
                    printf("El resultado de %d * %d es: %d\n",operando1,operando2,rdoMultiplicar);
                    printf("El resultado de %d / %d es: %.2f\n",operando1,operando2,rdoDividir);
                    printf("El factorial del primero es: %d\n",rdoFactoria1);
                    printf("El factorial del segundo es: %d\n",rdoFactoria2);
                }
                else
                {
                    printf("Todavia los calculos no se hicieron\n");
                }

                break;
            case 5:
                printf("Confirma salida?: \n");
                fflush(stdin);
                scanf("%c",&seguir);
                break;
        }

        system("pause");

    }while(seguir != 's');

    return 0;
}
