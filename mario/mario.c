#include <stdio.h>
#include <cs50.h>

int main(void)
{
    
    int altura = 0, hashes = 0, espacios = 0;
    
    do
    {
        altura = get_int("ingrese la altura que desea: ");
    }
    //condiciones a cumplir 
    while (altura < 0 || altura > 23);
    
    //bucles para generar la media pirámide 
    for (int i = 1; i <= altura; i++)
    {
        for (espacios = (altura - i); espacios > 0; espacios--)
            //la cantidad de espacios es relativa a la altura de la torre y que numero de hashes se ha colocado
        {
            printf(" ");//imprime los espacios en blanco 
        }
        
        for (hashes = 1; hashes <= (i + 1); hashes++)
        {
            printf("#");//imprime los hashes
        }
        printf("\n");
    }
        
    return 0;

}