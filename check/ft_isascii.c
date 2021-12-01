/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:44:52 by sperez-p          #+#    #+#             */
/*   Updated: 2021/12/01 16:02:20 by sperez-p         ###   ########.eus      */
/*                                                                            */
/* ************************************************************************** */

/*
  NAME
  ****
  ft_isascii --> is an ascii character

  SYNOPSIS
  ***********
  #include "libft.h"
  int	ft_isascii(int c);

  PARAMETERS
  **********
  c --> The character to be checked. It is passed as an int because characters
        are interpeted as numbers from the ASCII table.

  DESCRIPTION
  ***********
  The function ft_isascii() mimics the behavior of the isascii() function from
  ctype C library. Both functions check if c is a 7-bit unsigned char value
  that fits into the ASCII character set.

  RETURN VALUE
  ************
  - Non-zero value if c is an ascii character.
  - Zero value if not.

  NOTES	
  *****
  isascii() is a BSD extension and is also an SVr4 extension.
  POSIX.1-2008 marks isascii() as obsolete, noting that it cannot be used portably
  in a localized application.
  
*/
/*
  RETURN A CONDITION
  ******************
  When we return a condition, the computer will check if the condition is true or
  false. If it is true it will return 1 and if it is false it will
  return 0. This concept is known as Boolean values.
  
*/

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
