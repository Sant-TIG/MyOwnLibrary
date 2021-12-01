#include <stddef.h>
/*
  NOMBRE
  ******
  ft_intlen ---> integer length

  SINOPSIS
  ********
  size_t	intlen(int n);

  PARAMETROS
  **********
  n --> el numero entero del que se va a hallar la longitud

  DESCRIPCION
  ***********
  La funcion ft_intlen() cuenta la cantidad de numeros que forman el numero
  entero n pasado como parametro, es decir, halla la longitud de n.
  - Si n es igual a 0, devuelve 1.
  - Si n es igual al minimo de int, devuelve 11.
  - Si n es negativo, suma 1 a la longitud y multiplica n por -1 para poder
    analizarlo sin el signo.
  - Mientras n sea mayor que 0, lo divide entre 10 y suma uno a la
    longitud.

  VALOR RETORNADO
  ***************
  La longitud de n
*/

size_t	ft_intlen(int n)
{
	size_t	n_len;

	n_len = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n *= -1;
		n_len++;
	}
	while (n > 0)
	{
		n /= 10;
		n_len++;
	}
	return (n_len);
}
