/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:46:01 by sperez-p          #+#    #+#             */
/*   Updated: 2021/12/09 18:18:14 by sperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  NAME
  ****
  ft_toupper --> convert to uppercase

  SYNOPSIS
  ***********
  #include "libft.h"
  int	ft_toupper(int c);

  PARAMETERS
  **********
  c --> The character to convert. It is passed as an int because characters
        are interpeted as numbers from the ASCII table.

  DESCRIPTION
  ***********
  The function ft_toupper() mimics the behavior of the toupper() function from
  ctype C library. Both functions change c to its uppercase equivalent if it
  is possible.

  RETURN VALUE
  ************
  - c converted to uppercase.
  - c if it is not possible to convert.
  
*/

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}
