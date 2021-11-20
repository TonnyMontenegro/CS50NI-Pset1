#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //MU significa Monedas Usadas de esa Denominacion
    int MU25 = 0, MU10 = 0, MU5 = 0, MU1 = 0;
    //CCE significa Cambio Convertido a Entero y CTMU Cantidad total de Monedas Usadas
    int CCE = 0, CTMU = 0;
    //cambioSoli es la cantidad de cambio solicitada
    float cambioSoli = 0;
    //mientras no se ingrese un numero positivo se preguntara una y otra vez la cantidad
    do
    {
        cambioSoli = get_float("ingrese la cantidad de cambio que nesesita:  ");
    }

    while (cambioSoli < 0.00);
    //esto redondeara el cambio y lo pasara de float a entero para poder repartirlo en cuantas monedas se usaran
    CCE = round(cambioSoli * 100);

    while (CCE >= 25)//mientras la cantidad de cambio sea superior a 25 se usara esa moneda y asi con los demas casos
    {
        CCE = CCE - 25;

        MU25++;
    }

    while (CCE >= 10)
    {
        CCE = CCE - 10;

        MU10++;
    }

    while (CCE >= 5)
    {
        CCE = CCE - 5;

        MU5++;
    }

    while (CCE >= 1)
    {
        CCE = CCE - 1;

        MU1++;
    }

    //la suma de todas las monedas usadas
    CTMU = MU25 + MU10 + MU5 + MU1;


    printf("%d \n ", CTMU);

    return 0;

}
