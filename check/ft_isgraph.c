/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:59:53 by sperez-p          #+#    #+#             */
/*   Updated: 2021/12/01 16:27:42 by sperez-p         ###   ########.eus      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  NAME
  ****
  ft_isgraph ---> is an ascii graphic character.

  SYNOPSIS
  ***********
  #include "libft.h"
  int	ft_isgraph(int c);

  PARAMETERS
  **********
  c --> The character to be checked. It is passed as an int because characters
        are interpeted as numbers from the ASCII table.

  DESCRIPTION
  ***********
  The function ft_isgraph() mimics the behavior of the isgraph() function from
  ctype C library. Both functions check if c is an ascii graphic character.
  That is, any printable character except the space character.

  RETURN VALUE
  ************
  - Non-zero value if c is an ascii graphic character.
  - Zero value if not.
  
*/
/*
  RETURN A CONDITION
  ******************
  When we return a condition, the computer will check if the condition is true or
  false. If it is true it will return 1 and if it is false it will
  return 0. This concept is known as Boolean values.
  
*/

int ft_isgraph(int c)
{
        return (ft_isprint(c) && c != 32);
}
