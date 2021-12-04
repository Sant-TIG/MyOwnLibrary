/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:10:34 by sperez-p           #+#    #+#            */
/*   Updated: 2021/12/01 17:04:27 by sperez-p         ###   ########.eus      */
/*                                                                            */
/* ************************************************************************** */

/*
  NAME
  ****
  ft_isspace ---> is an ascii character made up of spaces.

  SYNOPSIS
  ***********
  #include "libft.h"
  int	ft_isspace(int c);

  PARAMETERS
  **********
  c --> The character to be checked. It is passed as an int because characters
        are interpeted as numbers from the ASCII table.

  DESCRIPTION
  ***********
  The function ft_isspace() mimics the behavior of the isspace() function from
  ctype C library. Both functions check if c is an ascii character made up of
  spaces (horizontal tab '\t', line feed '\n', vertical tab '\v', form feed '\f',
  carriage return '\r' and space ' ') or not.

  RETURN VALUE
  ************
  - Non-zero value if c is an ascii character made up of spaces.
  - Zero value if not.

*/
/*
  RETURN A CONDITION
  ******************
  When we return a condition, the computer will check if the condition is true or
  false. If it is true it will return 1 and if it is false it will
  return 0. This concept is known as Boolean values.
  
*/

int ft_isspace(int c)
{
    return ((c >= 9 && c <= 13) || c == 32);
}
