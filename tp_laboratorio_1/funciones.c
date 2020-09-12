#include <stdlib.h>
#include "funciones.h"
int menu(int flagOperando1, int flagOperando2,int flagOperando3,int operando1, int operando2)
{
    int operacion;

            system("cls");
        printf("*** Menu***\n\n");
        if(flagOperando1==1)
        {
            printf("1. Ingresar 1er operando (A=%d)\n",operando1);
        }
        else
        {
            printf("1. Ingresar 1er operando (A=x)\n");
        }
        if(flagOperando2==1)
        {
            printf("2. Ingresar 2do operando (B=%d)\n\n",operando2);
            flagOperando2 = 1;
        }
        else
        {
            printf("2. Ingresar 2do operando (B=y)\n\n");
        }
        if(flagOperando3==1)
        {
            printf("3. Calcular todas las operaciones\n");
            printf("    a) Calcular la suma(%d+%d)\n",operando1,operando2);
            printf("    b) Calcular la resta(%d-%d)\n",operando1,operando2);
            printf("    c) Calcular la division(%d/%d)\n",operando1,operando2);
            printf("    d) Calcular la multiplicacion(%d*%d)\n",operando1,operando2);
            printf("    e) Calcular el factorial(A!)\n\n", operando1);
            flagOperando1=1;
            flagOperando2 =1;
        }
        else
        {
        printf("    a) Calcular la suma(A+B)\n");
        printf("    b) Calcular la resta(A-B)\n");
        printf("    c) Calcular la division(A/B)\n");
        printf("    d) Calcular la multiplicacion(A*B)\n");
        printf("    e) Calcular el factorial(A!)\n\n");
        }
        printf("4. Informar resultados\n");
        printf("    a) El resultado de A+B es: r\n");
        printf("    b) El resultado de A-B es: r\n");
        printf("    c) El resultado de A/B es: r\n");
        printf("    d) El resultado de A*B es: r\n");
        printf("    e) El factorial de A es: r y El factorial de B es: r\n\n");
        printf("5. Salir\n\n");
        printf("\nIngrese una opcion: ");
        scanf("%d",&operacion);

    return operacion;
}
int sumar(int num1, int num2)
{
    int resultado;

    resultado = num1 + num2;

    return resultado;
}
int restar(int num1, int num2)
{
    int resultado;

    resultado = num1 - num2;

    return resultado;
}
int multiplicar(int num1, int num2)
{
    int resultado;

    resultado = num1 * num2;

    return resultado;
}
float dividir(int num1, int num2)
{
    float resultado;
    if(num2 !=0)
    {
        resultado = (float) num1 / num2;
    }
    else
    {
        printf("Error div por cero");
    }

    return resultado;
}

int factorial(int num1)
{
    int fact = 1;

    for(int i = 1; i<=num1; i++)
    {
        fact = fact * i;
    }

    return fact;
}
int factorial2(int num2)
{
    int fact = 1;

    for(int i = 1; i<=num2; i++)
    {
        fact = fact * i;
    }

    return fact;
}
