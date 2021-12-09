/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:45:51 by sperez-p          #+#    #+#             */
/*   Updated: 2021/12/09 18:37:41 by sperez-p         ###   ########.eus      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  NAME
  ****
  ft_tolower --> convert to lowercase

  SYNOPSIS
  ***********
  #include "libft.h"
  int	ft_tolower(int c);

  PARAMETERS
  **********
  c --> The character to convert. It is passed as an int because characters
        are interpeted as numbers from the ASCII table.

  DESCRIPTION
  ***********
  The function ft_tolower() mimics the behavior of the tolower() function from
  ctype C library. Both functions change c to its lowercase equivalent if it
  is possible.

  RETURN VALUE
  ************
  - c converted to lowercase.
  - c if it is not possible to convert.
  
*/

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}
