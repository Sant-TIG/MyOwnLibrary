/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:45:38 by sperez-p          #+#    #+#             */
/*   Updated: 2021/12/01 15:43:25 by sperez-p         ###   ########.eus      */
/*                                                                            */
/* ************************************************************************** */

/*
  NAME
  ****
  ft_isprint --> is an ascii printable character

  SYNOPSIS
  ***********
  #include "libft.h"
  int	ft_isprint(int c);

  PARAMETERS
  **********
  c --> The character to be checked. It is passed as an int because characters
        are interpeted as numbers from the ASCII table.

  DESCRIPTION
  ***********
  The function ft_isprint() mimics the behavior of the isprint() function from
  ctype C library. Both functions check if c is an ascii printable character or
  not.

  RETURN VALUE
  ************
  - Non-zero value if c is an ascii printable character.
  - Zero value if not.
  
*/
/*
  RETURN A CONDITION
  ******************
  When we return a condition, the computer will check if the condition is true or
  false. If it is true it will return 1 and if it is false it will
  return 0. This concept is known as Boolean values.
  
*/

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
