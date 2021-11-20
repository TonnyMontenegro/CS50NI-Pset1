#include <stdio.h>
#include <cs50.h>

int main()
{
    long long cc_num = get_long("Number: ");
    //num digitos es el numero de dogitos que tiene la tarjeta en cuestion , probabilidad es la var. que ayuda a comprobar parte del checksum y sum_num como su nombre dice la suma de los numeros
    int digito1 = 0, digito2 = 0, num_digitos = 0, probabilidad = 0, sum_num = 0;

    while (cc_num > 0)
    {

        digito2 = digito1;
        digito1 = cc_num % 10;

        if (num_digitos % 2 == 0)
        {
            sum_num += digito1;
        }
        else
        {
            int multi = 2 * digito1; //aca es donde se multiplican los numeros pares de la CC por 2
            probabilidad += (multi / 10) + (multi % 10);
        }

        cc_num /= 10;
        num_digitos++; //este es el contador que nos permite saber cuantos numeros tiene nuestra CC
    }

    bool Valida = (sum_num + probabilidad) % 10 == 0; //esto comprueba si nuestra CC es valida o no de dar 0 lo es y sino es que esta mal escrita o no es valida
    int P_2_digitos = (digito1 * 10) + digito2;

    if (digito1 == 4 && num_digitos >= 13 && num_digitos <= 16 && Valida) //si inicia con 4 y tiene 13 o 16 digitos es Visa
    {
        printf("VISA\n");
    }
    else if (P_2_digitos >= 51 && P_2_digitos <= 55 && num_digitos == 16 && Valida) //si sus primeros digitos van de 51 a 55 y tiene 16 digitos es Mastercard
    {
        printf("MASTERCARD\n");
    }
    else if ((P_2_digitos == 34 || P_2_digitos == 37) && num_digitos == 15 && Valida) //si inicia con 34 o 37 y tiene 15 digitos es american expres(AMEX)
    {
        printf("AMEX\n");
    }
    else //si no cumple al pie de la letera con cada uno de los condicionales anteriores la tarjeta ingresada es falsa o bien esta mal escrita por lo que la hace invalida
    {
        printf("INVALID\n");
    }
}