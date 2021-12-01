/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:54:44 by sperez-p          #+#    #+#             */
/*   Updated: 2021/12/01 12:58:42 by sperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
/*
  NOMBRE
  ******
  ft_itoa ---> integer to array

  SINOPSIS
  ********
  char	*ft_itoa(int n);

  PARAMETROS
  **********
  n --> el numero entero que se va a convertir en una cadena.

  DESCRIPCION
  ***********
  La funcion ft_itoa() convierte el numero entero n pasado como parametro en
  una cadena de caracteres.
  - Utiliza la funcion ft_intlen() para saber la longitud de n.
  - Crea un espacio de memoria dinamico de tamaño igual a la longitud de n
    mas uno para poder almacenar el caracter nulo ('\0') al final de la cadena.
  - Si n es igual a cero o al minimo de int, simplifica el proceso devolviendo 
	  una copia de esos numeros como cadenas en el espacio de memoria creado
  	anteriormente utilizando la funcion ft_strcpy().
  - Si es cualquier otro numero entero, primero asigna el caracter nulo al final
	  del espacio de memoria creado, para despues analizar el numero:
	  - Si es negativo, asigna el caracter '-' como primer elemento de la cadena y
	    multiplica por -1 el numero para poder analizarlo.
	  - Mientras sea positivo, asignaremos a cada bloque de memoria del espacio
	    de memoria reservado, en orden descendiente, el modulo de n entre diez
		  convertido a caracter. Después, el valor de n cambia al resultado de
	    dividirlo entre 10 hasta que n sea igual o menor que cero.

  VALOR DEVUELTO
  ***************
  El valor de n convertido a una cadena de caracteres.

*/

char	*ft_itoa(int n)
{
	char	*dst;
	size_t	n_len;

	n_len = ft_intlen(n);
	dst = (char *)malloc(sizeof(char) * (n_len + 1));
	if (!dst)
		return (NULL);
	if (n == 0)
		return (ft_strcpy(dst, "0", 1));
	if (n == -2147483648)
		return (ft_strcpy(dst, "-2147483648", 11));
	*(dst + n_len) = '\0';
	if (n < 0)
	{
		*dst = 45;
		n *= -1;
	}
	while (n > 0)
	{
		*(dst + --n_len) = 48 + (n % 10);
		n /= 10;
	}
	return (dst);
}
