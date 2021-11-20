# Project 1 CS50

1.  Implementar  <a href="#Hello" class="btn btn-sm btn-default">Hello</a>
2.  Implementar  <a href="#Mario" class="btn btn-sm btn-default">Mario</a>
3.  Implementar uno de los siguientes (cualquiera; pero, si resuelves ambos tendrás puntos extras):
    -   Implementar  <a href="#Cash" class="btn btn-sm btn-default">Cash</a>
    -   Implementar  <a href="#Credit" class="btn btn-sm btn-default">Credit</a>


<h2 id="Hello">Hello</h2>

Implementa un programa que muestre un simple saludo al usuario, como el siguiente.

```
$ ./hello
hello, world
```

<h2 id="Mario">Mario</h2>

Crea un programa que muestre por pantalla una media pirámide con la altura especificada, como se muestra a continuación.

```bash
$ ./marioHeight: 5    
    ##
   ###
  ####
 #####
######

$ ./marioHeight: 3
    ##
   ###
  ####
```
## Especificación

-   Crea, en un archivo llamado  `mario.c`  en  `~/pset1/Mario`, un programa que recree la media pirámide utilizando almohadillas (también llamado numeral o hashes)  `#`  como bloques.
    
-   Para hacer las cosas más interesantes, primero pide al usuario la altura de la pirámide, que debe ser un número entero, no negativo, y no mayor que  `23`  (La altura de pirámide de la imagen es de  `8`).
    
-   Si el usuario ingresa un número no adecuado, se le deberá solicitar de nuevo.
    
-   Entonces, genera (usando  `printf`  y uno o más bucles) la media pirámide deseada.
    
-   Asegúrate de alinear la esquina inferior izquierda de la pirámide con el borde izquierdo del terminal.

<h2 id="Cash">Cash</h2>

Implemente un programa que calcule el número mínimo de monedas requeridas para dar el cambio (o vuelto) al usuario.

```
$ ./cashChange owed: 
0.414
```

## Especificación

-   Crea, en un archivo llamado  `cash.c`  en  `~/pset1/cash`, un programa que solicite al usuario cuando cambio se debe, y que luego muestre la menor cantidad de monedas para devolver dicho cambio.
    
-   Usa  `get_float`  de la librería de CS50 para recibir lo que el usuario ingrese, y  `printf`  de la librería de E/S estándar para mostrar la respuesta. Asume que las únicas monedas disponibles son de 25¢, 10¢, 5¢ y 1¢.
    
    -   Te pedimos que uses get_float, así puedes manejar dólares y centavos, omitiendo el signo. En otras palabras, si se debe $9.75 de cambio (un periódico cuesta 25¢, pero el cliente paga con un billete de $10), asume que lo que se ingrese en el programa sea  `9.75`, y no  `$9.75`  o  `975`. De igual manera, si se deben $9, lo que se ingrese en el programa debe ser  `9.00`  o  `9`, no  `$9`  o  `900`. Seguramente, por la naturaleza de las variables de punto flotante, el programa debe funcionar cuando se ingrese  `9.0`  o  `9.000`  también; no necesitas preocuparte si lo que se ingresa tiene el formato correcto.
        
    
-   No es necesario que revises si lo que se ingresa es muy grande como para alcanzar en un tipo  `float`. El uso de  `get_float`  por si solo validará esto del tamaño, mas no si el número es no negativo.
    
-   Si el usuario ingresa un número negativo, deberás volver a solicitar un monto válido.
    
-   Es necesario, para las pruebas automatizadas de tu código, te pedimos que la última línea de la salida debe ser el número mínimo de monedas posible: un entero seguido de  `\n`.

<h2 id="Credit">Credit</h2>

Implementa un programa que determine si un número de tarjeta de crédito ingresado es válido según el algoritmo de Luhn.

```
$ ./credit
Number: 378282246310005
AMEX
```

## Especificación

-   En un archivo llamado  `credit.c`  en  `~/pset1/credit`, crea un programa que pida al usuario un número de tarjeta de crédito y lo valide, además que determine en el caso que sea válida, si es American Express, Visa o MasterCard.
    
-   Para que pases las pruebas automatizadas, te pedimos que la última línea de lo que tu programa escriba sea  `AMEX\n`  o  `MASTERCARD\n`  o  `VISA\n`  o  `INVALID\n`  según sea el caso, nada más y nada menos, y que la función  `main`  siempre retorne  `0`.
    
-   Para simplificar, debes asumir que lo que el usuario ingrese será completamente numérico, sin guiones, a cómo se imprime en la propia tarjeta.
    
-   Es muy poco probable que lo que el usuario ingrese quepa en un  `int`; mejor has uso de  `get_long_long`  de la librería CS50 para leer lo que el usuario ingrese (¿Por qué?).
