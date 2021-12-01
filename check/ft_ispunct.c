/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:04:41 by sperez-p          #+#    #+#             */
/*   Updated: 2021/12/01 16:39:31 by sperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  NAME
  ****
  ft_ispunct ---> is a punctuation mark

  SYNOPSIS
  ***********
  #include "libft.h"
  int	ft_ispunct(int c);

  PARAMETERS
  **********
  c --> The character to be checked. It is passed as an int because characters
        are interpeted as numbers from the ASCII table.

  DESCRIPTION
  ***********
  The function ft_ispunct() mimics the behavior of the ispunct() function from
  ctype C library. Both functions check if c is any printable character except
  space and alphanumeric characters.

  RETURN VALUE
  ************
  - Non-zero value if c is a punctuation mark.
  - Zero value if not.
  
*/
/*
  RETURN A CONDITION
  ******************
  When we return a condition, the computer will check if the condition is true or
  false. If it is true it will return 1 and if it is false it will
  return 0. This concept is known as Boolean values.
*/

int ft_ispunct(int c)
{
    if (ft_isprint(c))
        return (!ft_isalnum(c) && c != 32);
    return (0);
}
